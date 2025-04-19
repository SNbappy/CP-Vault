/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-04-18 14:08:47
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

ll nCr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    double res = 1;
    for (ll i = 1; i <= r; i++)
    {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

void Beche_achi()
{
    string s, st;
    cin >> s >> st;

    ll target = 0, current = 0, q = 0;
    for (char c : s)
        target += (c == '+' ? 1 : -1);

    for (char c : st)
    {
        if (c == '+')
            current += 1;
        else if (c == '-')
            current -= 1;
        else
            q++;
    }

    ll delta = target - current;

    if ((delta + q) % 2 != 0 || abs(delta) > q)
    {
        cout << fixed << setprecision(12) << 0.0 << el;
        return;
    }

    ll k = (delta + q) / 2;
    double prob = nCr(q, k) / pow(2.0, q);

    cout << fixed << setprecision(12) << prob << el;
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