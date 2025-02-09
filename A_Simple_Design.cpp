/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-21 15:21:42

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
    ll x, k;
    cin >> x >> k;
    while (1)
    {
        ll y = x, s = 0;
        while (y > 0)
        {
            s += y % 10;
            y /= 10;
        }
        if (s % k == 0)
        {
            cout << x << el;
            break;
        }
        x++;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}