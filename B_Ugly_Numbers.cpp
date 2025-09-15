/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-09-14 08:59:41
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

const ll MAX = 1e18;

void Beche_achi()
{
    vector<ll> ugly_nums;

    ll p2 = 1;
    for (ll x = 0; p2 <= MAX; x++, p2 *= 2)
    {
        ll p3 = 1;
        for (ll y = 0; p2 * p3 <= MAX; y++, p3 *= 3)
        {
            /* code */
            ll p5 = 1;
            for (ll z = 0; p2 * p3 * p5 <= MAX; z++, p5 *= 5)
            {
                ugly_nums.pb(p2 * p3 * p5);
            }
        }
    }
    sort(all(ugly_nums));
    cout << "The 1500'th ugly number is " << ugly_nums[1500 - 1] << "." << el;

    // for (ll i = 0; i < 20; i++)
    // {
    //     cout << ugly_nums[i] << " ";
    // }

    // cout << ugly_nums.size() << el;
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