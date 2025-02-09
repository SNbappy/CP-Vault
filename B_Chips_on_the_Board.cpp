/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-08 01:59:37

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
    vector<ll> a(n), b(n);
    ll s1 = 0, s2 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    for (ll i = 0; i < n; i++)
    {
        s1 += b[0] + a[i];
        s2 += a[0] + b[i];
    }
    cout << min(s1, s2) << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}