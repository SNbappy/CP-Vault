/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-27 15:12:45
*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

// Function to calculate modular inverse using Fermat's little theorem
ll mod_inv(ll a, ll m) {
    ll res = 1, exp = m - 2; // Fermat's theorem: a^(m-2) is the inverse of a mod m
    while (exp) {
        if (exp & 1) res = res * a % m; // If exp is odd
        a = a * a % m; // Square the base
        exp >>= 1; // Divide exp by 2
    }
    return res;
}

void Beche_achi()
{
    ll n;
    cin >> n;
    
    // Calculate sum of squares
    ll sq = (n % MOD) * ((n + 1) % MOD) % MOD * ((2 * n + 1) % MOD) % MOD;
    sq = sq * mod_inv(6, MOD) % MOD; // Use modular inverse of 6

    // Calculate sum of integers
    ll sum = (n % MOD) * ((n + 1) % MOD) % MOD;
    sum = sum * mod_inv(2, MOD) % MOD; // Use modular inverse of 2

    // Apply the formula
    ll ans1 = (2 * sq % MOD - sum + MOD) % MOD; // Ensure positive result
    ll ans = (ans1 * 2022) % MOD; // Final result

    cout << ans << el; // Output result
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

