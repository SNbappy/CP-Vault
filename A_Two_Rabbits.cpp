/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-04 02:24:02

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

    ll x, y, a, b;
    ll cnt = 0;
    bool ok = false;
    cin >> x >> y >> a >> b;
    ll p = a + b;
    ll k = abs(y - x);
    if(k%p==0)
        cout << k / p << el;
        else
            cout << -1 << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}