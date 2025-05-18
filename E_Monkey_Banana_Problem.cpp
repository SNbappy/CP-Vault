/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-17 20:38:29
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
    ll t;
    cin >> t;
    for (ll cs = 0; cs < t; cs++)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> a(2 * n, vector<ll>(n + 1, 0));
        ll cnt = 1;
        for (ll i = 1; i <= 2 * n - 1; i++)
        {
            for (ll j = 1; j <= cnt; j++)
            {
                cin >> a[i][j];
            }
            if (i < n)
                cnt++;
            else
                cnt--;
        }

        for (ll i = 1; i <= 2 * n - 1; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                ll mx = a[i - 1][j];
                if (i <= n)
                {
                    mx = max(mx, a[i - 1][j - 1]);
                }
                else
                {
                    if (j + 1 <= n)
                        mx = max(mx, a[i - 1][j + 1]);
                }
                a[i][j] += mx;
            }
        }
        cout << "Case " << cs + 1 << ": ";
        cout << a[2 * n - 1][1] << el;
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