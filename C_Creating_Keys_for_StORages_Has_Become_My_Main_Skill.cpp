/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-02-25 20:43:08
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
    ll x;
    cin >> n >> x;

    ll m0 = 0;
    for (ll y = 0; y <= n; y++)
    {
        if ((y & (~x)) != 0)
        {
            m0 = y;
            break;
        }
    }
    if (m0 == 0)
        m0 = n + 1;

    ll k;
    if (m0 < n)
    {
        k = m0;
    }
    else
    {
        ll tempOR = 0;
        for (ll i = 0; i < n; i++)
        {
            tempOR |= i;
        }
        if (tempOR == x)
        {
            k = n;
        }
        else
        {
            k = n - 1;
        }
    }

    vector<ll> ans;
    ans.reserve(n);
    for (ll i = 0; i < k; i++)
    {
        ans.push_back(i);
    }

    ll currentOR = 0;
    for (ll i = 0; i < k; i++)
    {
        currentOR |= ans[i];
    }

    if (n > k)
    {
        if (currentOR != x)
        {
            ans.push_back(x);
            currentOR |= x;
        }
        while (ans.size() < (size_t)n)
        {
            ans.push_back(0);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << (i + 1 < n ? " " : "\n");
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

    tst
    Beche_achi();

    Goodbye
}