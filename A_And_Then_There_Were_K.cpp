/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-30 07:52:34
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
    ll x = 0;
    for (ll i = 0; (1 << i) <= n; i++)
    {
        /* code */
        x = i;
        // cout << (i << 1) << el;
    }
    // cout << el;
    cout << (int)pow(2, x) - 1 << el;
    // cout << el;
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