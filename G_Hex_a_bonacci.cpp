/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-12 11:59:17
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
const int MOD = 10000007;

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
    ll t;
    cin >> t;
    for (ll k = 0; k < t; k++)
    {
        cout << "Case " << k + 1 << ": ";
        ll a, b, c, d, e, f, n;
        cin >> a >> b >> c >> d >> e >> f >> n;
        vector<ll> dp(max(6LL, n + 1));
        if(n >= 0)
        dp[0] = a % MOD;
        if(n >= 1)
        dp[1] = b % MOD;
        if(n >= 2)
        dp[2] = c % MOD;
        if(n >= 3)
        dp[3] = d % MOD;
        if(n >= 4)
        dp[4] = e % MOD;
        if(n >= 5)
        dp[5] = f % MOD;


        for (ll i = 6; i <= n; i++)
        {
            dp[i] = (dp[i - 1] % MOD + dp[i - 2] % MOD + dp[i - 3] % MOD + dp[i - 4] % MOD + dp[i - 5] % MOD + dp[i - 6] % MOD) % MOD;
        }
        cout << dp[n] << el;
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

    // tst
    Beche_achi();

    Goodbye
}