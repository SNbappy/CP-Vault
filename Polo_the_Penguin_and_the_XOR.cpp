/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-09 06:41:40
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

void Beche_achi()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        sum += (a[i] ^ a[i + 1]);
    }
    sum += (a[0] ^ a[n - 1]);
    cout << sum << el;
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