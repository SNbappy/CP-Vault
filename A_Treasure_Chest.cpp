/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-19 15:41:32

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

    ll x, y, k;
    cin >> x >> y >> k;
    if(x>=y)
        cout << x << el;
        else{
            if (abs(x - y) >= k)
                cout << x + k + 2 * (y - (x + k)) << el;
            // cout << y << el;
            // cout << y << el;
            else cout << y << el;
            // cout << x + k + 2 * (y - (x + k)) << el;cout << y << el;
        }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}