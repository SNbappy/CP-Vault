/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-07-23 21:05:27
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

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll ok = 0, ng = 1e9 + 1;

    while (ng - ok > 1)
    {
        int mid = (ok + ng) / 2;

        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= mid)
                sum += (a[i] - mid) / b[i] + 1;
        }

        if (sum >= k)
            ok = mid;
        else
            ng = mid;
    }

    ll ans = 0, s = 0;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= ok)
        {
            int m = (a[i] - ok) / b[i] + 1;

            ans += 1LL * m * a[i] - 1LL * m * (m - 1) / 2 * b[i];
            s += m;
        }
    }
    ans -= 1LL * ok * (s - k);
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

    tst
    Beche_achi();

    Goodbye
}