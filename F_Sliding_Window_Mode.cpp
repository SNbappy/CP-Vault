/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-07-03 16:32:32
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/// change int to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void Beche_achi()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    map<int, int> cnt;
    map<int, set<int>> freq_map;
    int max_freq = 0;

    for (int i = 0; i < k; ++i)
    {
        int x = a[i];
        if (cnt.count(x))
        {
            int old_freq = cnt[x];
            freq_map[old_freq].erase(x);
            if (freq_map[old_freq].empty())
                freq_map.erase(old_freq);
            cnt[x]++;
        }
        else
        {
            cnt[x] = 1;
        }
        freq_map[cnt[x]].insert(x);
        max_freq = max(max_freq, cnt[x]);
    }

    cout << *freq_map[max_freq].begin() << " ";

    for (int i = k; i < n; ++i)
    {
        int out = a[i - k];
        int in = a[i];

        int f_out = cnt[out];
        freq_map[f_out].erase(out);
        if (freq_map[f_out].empty())
            freq_map.erase(f_out);
        cnt[out]--;
        if (cnt[out] == 0)
            cnt.erase(out);
        else
            freq_map[cnt[out]].insert(out);

        if (freq_map[max_freq].empty())
            max_freq--;

        if (cnt.count(in))
        {
            int old_freq = cnt[in];
            freq_map[old_freq].erase(in);
            if (freq_map[old_freq].empty())
                freq_map.erase(old_freq);
            cnt[in]++;
        }
        else
        {
            cnt[in] = 1;
        }
        freq_map[cnt[in]].insert(in);
        max_freq = max(max_freq, cnt[in]);

        cout << *freq_map[max_freq].begin() << " ";
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // tst
    Beche_achi();

    Goodbye
}