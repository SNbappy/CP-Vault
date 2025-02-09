/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-21 15:10:47

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
    for (ll x = 1; x <= 20; x++)
    {
        for (ll y = 1; y <= 20; y++)
        {
            if (x + y >= n or x == y)
            {
                continue;
            }
            ll z = n - x - y;
            if (z == x or z == y)
                continue;
            if (x % 3 == 0 or y % 3 == 0 or z % 3 == 0)
            {
                continue;
            }
            yes;
            cout << x << " " << y << " " << z << el;
            return;
        }
    }
    no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}