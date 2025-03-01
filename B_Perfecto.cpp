/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-02-28 21:16:50
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
    ll n;
    cin >> n;

    ll total = (ll)n * (n + 1) / 2;
    ll r = (ll)sqrt(total);
    if (n == 1 || r * r == total)
    {
        cout << -1 << el;
        return;
    }
    if (n == 2)
    {
        cout << "2 1" << el;
        return;
    }

    vector<ll> p(n);
    p[0] = 2;
    p[1] = 3;
    p[2] = 1;
    for (ll i = 3; i < n; i++)
    {
        p[i] = i + 1;
    }

    ll s = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        s += p[i];
        ll r = (ll)sqrt(s);
        if (r * r == s)
        {
            ll a = p[i], b = p[i + 1];
            swap(p[i], p[i + 1]);
            s = s - a + b;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << p[i] << " ";
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