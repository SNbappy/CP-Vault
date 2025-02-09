/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-08 00:40:12

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

    
    ll a[3], b[3];
    ll cup = 0, medal = 0;
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
        cup += a[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        cin >> b[i];
        medal += b[i];
    }
    ll n;
    cin >> n;
    ll k = (cup + 4) / 5 + (medal + 9) / 10;
    if(k<=n)
        yes;
        else
            no;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}