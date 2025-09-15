/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-09-15 16:44:27
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

vector<ll> v;

void Beche_achi()
{
    ll n;
    cin >> n;
    ll sum = n;
    ll ans = 0;
    while (1)
    {
        ll x = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] <= sum)
                x = i;
            else
                break;
        }
        sum -= v[x];
        ans += pow(3, x + 1) + x * (pow(3, x - 1));
        // cout << x << el;
        if (sum == 0)
        {
            // cout << x << el;
            break;
        }
    }
    cout << ans << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (ll i = 0; pow(3, i) <= 1e9; i++)
    {
        v.pb(pow(3, i));
    }

    tst
    Beche_achi();

    Goodbye
}