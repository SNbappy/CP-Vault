/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-01-23 06:35:05
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
    int n;
    cin >> n;
    vector<ll> l(n + 1), r(n + 1), sum(2 * n + 1), cnt(2 * n + 1);
    for (int i = 1; i <= 2 * n; ++i)
    {
        sum[i] = 0;
        cnt[i] = 0;
    }

    for (int i = 1; i <= n; ++i)
    {
        cin >> l[i] >> r[i];
        if (l[i] == r[i])
        {
            sum[l[i]] = 1;
            ++cnt[l[i]];
        }
    }

    for (int i = 2; i <= 2 * n; ++i)
    {
        sum[i] += sum[i - 1];
    }

    for (int i = 1; i <= n; ++i)
    {
        if (l[i] == r[i])
        {
            if (cnt[l[i]] <= 1)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        else
        {
            int covered = sum[r[i]] - sum[l[i] - 1];
            int required = r[i] - l[i] + 1;
            if (covered < required)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
    }
    cout << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}