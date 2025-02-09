/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-02-02 08:15:56
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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll computeGCD(const vector<ll> &diffs)
{
    if (diffs.empty())
        return 0;
    ll g = diffs[0];
    for (ll i = 1; i < diffs.size(); ++i)
    {
        g = gcd(g, diffs[i]);
    }
    return g;
}

void Beche_achi()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    sort(a.begin(), a.end());
    vector<ll> diffs;
    for (ll i = 1; i < n; ++i)
    {
        diffs.push_back(a[i] - a[i - 1]);
    }
    ll G = computeGCD(diffs);
    ll original_max = a.back();
    ll sum_orig = 0;
    for (ll x : a)
        sum_orig += (original_max - x);

    ll max_candidate = -1e18;
    for (ll i = 1; i < n; ++i)
    {
        ll current_diff = a[i] - a[i - 1];
        if (current_diff > G)
        {
            ll candidate = a[i] - G;
            if (candidate > a[i - 1] && candidate < a[i])
            {
                if (!binary_search(a.begin(), a.end(), candidate))
                {
                    if (candidate > max_candidate)
                    {
                        max_candidate = candidate;
                    }
                }
            }
        }
    }

    ll sum_below = -1;
    if (max_candidate != -1e18)
    {
        sum_below = (sum_orig + (original_max - max_candidate)) / G;
    }
    ll sum_above = (sum_orig + G * n) / G;

    if (sum_below != -1)
    {
        cout << min(sum_below, sum_above) << '\n';
    }
    else
    {
        cout << sum_above << '\n';
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