/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-23 10:32:17

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

    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == k)
            cnt++;
    }
    if (cnt != 0)
        yes;
    else
        no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}