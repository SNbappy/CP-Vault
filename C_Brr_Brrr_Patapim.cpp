/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-04-13 21:46:33
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
    vector<ll> a(n * n);
    for (ll i = 0; i < n * n; i++)
    {
        cin >> a[i];
    }
    unordered_set<ll> s;
    vector<ll> v, p;
    ll x = 0;
    for (ll i = 0; i < n * n; i++)
    {
        s.insert(a[i]);
        if (s.size() != x)
        {
            v.pb(a[i]);
            p.pb(a[i]);
            x++;
        }
    }
    // vector<ll> v;
    // for (auto x : s)
    //     v.pb(x);
    sort(all(v));
    ll i = 1;
    bool ok = true;
    for (auto x : v)
    {
        if (i == x)
        {
            i++;
        }
        else
        {
            cout << i << " ";
            ok = false;
            break;
        }
    }
    if(ok)
        cout << v.size() + 1 << " ";
    // for (auto x : s)
    //     cout << x << " ";
    // cout << el;
    // for (auto x : a)
    //     cout << x << " ";
    // cout << el;
    for (auto x : p)
        cout << x << " ";
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