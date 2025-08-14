/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-08-14 07:28:36
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
    vector<pair<ll, ll>> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.pb({x, i + 1});
    }
    sort(all(a));
    for (ll i = 0; i < n - 2; i++)
    {
        ll x = a[i].first;
        ll l = i + 1, r = n - 1;
        while (l < r)
        {
            ll sum = a[i].first + a[l].first + a[r].first;
            if (sum == k)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << el;
                return;
            }
            else if(sum < k){
                l++;
            }
            else
                r--;
        }
        // ll sum = a[i].first + a[l].first + a[r].first;
        // if (sum == k)
        // {
        //     cout << a[i].second << " " << a[l].second << " " << a[r].second << el;
        //     return;
        // }
    }
    cout << "IMPOSSIBLE" << el;
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