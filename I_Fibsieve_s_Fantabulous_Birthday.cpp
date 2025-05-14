/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-14 12:42:10
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
    ll t;
    cin >> t;
    for (ll k = 0; k < t; k++)
    {
        cout << "Case " << k + 1 << ": ";
        ll n;
        cin >> n;
        ll x, row, column;
        // cout << (ll)sqrtl(n) * (ll)sqrtl(n) << el;
        if (n == ((ll)sqrtl(n)) * (ll)(sqrtl(n)))
        {
            x = sqrtl(n);
        }
        else
            x = sqrtl(n) + 1;
        // cout << x << el;
        // type-1: closest > n, even -> column, odd -> row
        if (x * x - n < x)
        {
            if (x % 2)
            {
                row = x;
                column = x * x - n + 1;
            }
            else
            {
                column = x;
                row = x * x - n + 1;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                row = x;
                column = n - (x - 1) * (x - 1);
            }
            else
            {
                column = x;
                row = n - (x - 1) * (x - 1);
            }
        }
        cout << column << " " << row << el;
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