/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-04-24 20:51:23
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == -1)
            cnt++;
    }

    if (cnt == n)
    {
        sort(all(a));
        ll p = a[0] + k;
        ll x = p - a[n - 1] + 1;
        cout << max(0LL, x) << el;
        return;
    }

    bool ok = true;
    bool op = true;
    ll vallagena = 0;
    ll janina = 0;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            if (ok)
            {
                vallagena = a[i] + b[i];
                ok = false;
            }
            else
            {
                janina = a[i] + b[i];
                op = false;
            }
        }
        // cout << vallagena << " " << janina << el;
        if (!op and !ok and vallagena != janina)
        {
            cout << 0 << el;
            return;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if ((vallagena - a[i] > k || (vallagena - a[i] < 0)) and b[i] == -1)
        {
            cout << 0 << el;
            return;
        }
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     // cout << vallagena << " " << a[i] << el;
    //     if (vallagena - a[i] > k and b[i] == -1)
    //     {
    //         cout << 0 << el;
    //         return;
    //     }
    // }

    cout << 1 << el;
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