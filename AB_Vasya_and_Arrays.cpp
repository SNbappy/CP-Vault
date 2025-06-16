/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-06-16 15:37:21
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
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    ll m;
    cin >> m;
    vector<ll> b(m);
    for (auto &x : b)
        cin >> x;
    ll suma = accumulate(all(a), 0LL);
    ll sumb = accumulate(all(b), 0LL);
    if (suma != sumb)
    {
        cout << -1 << el;
        return;
    }
    ll ans = 0;
    suma = a[0], sumb = b[0];
    ll i = 0, j = 0;
    while (i < n and j < m)
    {
        if (suma == sumb)
        {
            ans++;
            i++;
            j++;
            if (i < n)
                suma += a[i];
            if (j < m)
                sumb += b[j];
        }
        else if (suma < sumb)
        {
            i++;
            if (i < n)
                suma += a[i];
        }
        else
        {
            j++;
            if (j < m)
                sumb += b[j];
        }
    }
    if (i < n - 1 || j < m - 1)
        ans++;
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

    // tst
    Beche_achi();

    Goodbye
}