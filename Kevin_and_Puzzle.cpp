/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-01-20 21:06:56
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

/************************************************************
 *                   Utility Functions                     *
 ************************************************************/

// Function to compute modular exponentiation
ll mod_pow(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute factorials up to max_n modulo MOD
vector<ll> compute_factorials(ll max_n)
{
    vector<ll> fact(max_n + 1, 1);
    for (ll i = 1; i <= max_n; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    return fact;
}

// Function to compute inverse factorials using modular exponentiation
vector<ll> compute_inverse_factorials(ll max_n, const vector<ll> &fact)
{
    vector<ll> inv_fact(max_n + 1, 1);
    inv_fact[max_n] = mod_pow(fact[max_n], MOD - 2, MOD);
    for (ll i = max_n - 1; i >= 0; i--)
    {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
    return inv_fact;
}

// Function to compute binomial coefficient modulo MOD
ll binomial(ll n, ll k, const vector<ll> &fact, const vector<ll> &inv_fact)
{
    if (k < 0 || k > n)
        return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

/************************************************************
 *                       Core Logic                        *
 ************************************************************/

void Beche_achi()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Vector to store positions where a[i] == i
    vector<ll> p;
    bool ok = true;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] > i)
        {
            ok = false;
            break;
        }
        if (a[i] == i)
        {
            p.pb(i);
        }
    }

    if (!ok)
    {
        cout << 0 << el;
        return;
    }

    // Precompute factorials and inverse factorials
    ll max_n = n + 10;
    vector<ll> fact = compute_factorials(max_n);
    vector<ll> inv_fact = compute_inverse_factorials(max_n, fact);

    // Compute result using binomial coefficient
    ll xh = p.size(); // Number of fixed points
    ll xl = n - xh;   // Number of unfixed points
    ll result = binomial(xh + xl - 1, xl, fact, inv_fact);

    cout << result << el;
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
