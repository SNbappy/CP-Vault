/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 22:19:04

*/

//************************************************************************
//************************************************************************

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

//************************************************************************
//************************************************************************

void Beche_achi()
{

    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> a(n);
    ll lastA = n + 2, lastB = n + 2;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (lastA > lastB)
            swap(lastA, lastB);
        if (lastA >= a[i])
        {
            lastA = a[i];
        }
        else if (lastB >= a[i])
        {
            lastB = a[i];
        }
        else
        {
            lastA = a[i];
            ans++;
        }
    }
    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}