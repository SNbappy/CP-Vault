/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-09-15 13:58:49
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
    const ll MAXA = 1000000;
    static ll spf[MAXA + 1];

    // Sieve for Smallest Prime Factor (SPF)
    for (ll i = 2; i <= MAXA; ++i)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            if (1LL * i * i <= MAXA)
            {
                for (ll j = i * i; j <= MAXA; j += i)
                {
                    if (spf[j] == 0)
                        spf[j] = i;
                }
            }
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;

        ll lpf = spf[x];
        ll gpf = 0;
        ll omega = 0; // number of distinct prime factors
        ll Omega = 0; // total prime factors (with multiplicity)
        ll d = 1;     // number of divisors
        ll sigma = 1; // sum of divisors

        ll t = x;
        while (t > 1)
        {
            ll p = spf[t];
            ll e = 0;
            ll sum_p = 1; // 1 + p + p^2 + ... + p^e
            ll cur = 1;
            while (t % p == 0)
            {
                t /= p;
                ++e;
                cur *= p;
                sum_p += cur;
            }
            ++omega;
            Omega += e;
            d *= (e + 1);
            sigma *= sum_p;
            gpf = p; // primes encountered in non-decreasing order with SPF factoring
        }

        cout << lpf << ' ' << gpf << ' ' << omega << ' ' << Omega << ' ' << d << ' ' << sigma << '\n';
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