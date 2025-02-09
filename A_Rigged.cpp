/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-23 09:04:41

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
    ll s[n], e[n];
    ll ans = 0;
    bool ok = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i] >> e[i];
    }
    for (ll i = 1; i < n; i++)
    {
        if(s[i]>=s[0] && e[i]>=e[0])
            ok = false;
    }
    if(!ok)
        cout << -1 << el;
        else
            cout << s[0] << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}