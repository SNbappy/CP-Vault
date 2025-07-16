/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-07-15 23:07:38
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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n * m);
    for (ll i = 0; i < n * m; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll large = a[n*m - 1];
    ll secondLarge = a[n*m - 2];
    ll small = a[0];
    ll secondSmall = a[1];

    if(n > m){
        ll ans = (large - small) * (n - 1) * m;
        ans += (large - secondSmall) * (m - 1);

        ll ans1 = (large - small) * (n - 1) * m;
        ans1 += (secondLarge - small) * (m - 1);
        cout << max(ans, ans1) << el;
    }
    else{
        ll ans = (large - small) * (m - 1) * n;
        ans += (large - secondSmall) * (n - 1);

        ll ans1 = (large - small) * (m - 1) * n;
        ans1 += (secondLarge - small) * (n - 1);
        cout << max(ans, ans1) << el;
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