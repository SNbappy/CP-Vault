/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-04 18:26:46

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
    ll k;
    bool ok = false;
    if (100 % n == 0)
    {
        cout << 100 / n << el;
        ok = true;
    }
    else
    {
        k = gcd(n, 100);
    }
    if (!ok)
        cout << 100/k << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}