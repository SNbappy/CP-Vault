/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-15 21:39:58
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

const ll M = 5e6;
ll a[M + 6];

void Beche_achi()
{
    for (ll i = 0; i <= M; i++)
    {
        a[i] = i;
    }

    for (ll i = 2; i*i <= M; i++)
    {
        if (a[i] == i)
        {
            for (ll j = i; j <= M; j+= i)
            {
                a[j] -= (a[j] / i);
            }
        }
    }

    for (ll i = 2; i <= M; i++)
    {
        a[i] = a[i] * a[i] + a[i - 1];
    }

    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        cout << "Case " << i + 1 << ": ";
        ll l, r;
        cin >> l >> r;

        cout << a[r] - a[l - 1] << el;
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