/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-09 05:45:15
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

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n, q;
    cin >> n >> q;

    vector<ll> a(n + 2), pref_sum(n + 2);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    pref_sum[0] = 0;
    pref_sum[1] = a[1];

    for (ll i = 2; i <= n; i++)
    {
        pref_sum[i] = a[i] + pref_sum[i - 1];
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll sum = pref_sum[r] - pref_sum[l];
        cout << sum << el;
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}