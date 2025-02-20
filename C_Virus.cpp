/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-11-22 08:50:18
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define int long long
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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    vector<int> gap;
    if (m == 1)
    {
        gap.push_back(n - 1);
    }
    else
    {
        for (int i = 0; i < m - 1; i++)
        {
            gap.push_back(a[i + 1] - a[i] - 1);
        }
        gap.push_back(n - a[m - 1] + a[0] - 1);
    }
    sort(rall(gap));
    int safe = 0, spread = 0;
    for (int i = 0; i < gap.size(); i++)
    {
        int take = gap[i] - spread;
        if (take < 1)
        {
            break;
        }
        if(take==1){
            safe++;
            spread += 2;
        }
        else{
            safe++;
            spread += 2;
            take -= 2;
            if(take>=1){
                safe += take;
                spread += 2;
            }
        }
    }
    cout << n - safe << el;
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