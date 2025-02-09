/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 14:07:24

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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll sum = a + b + c + d;
    if(sum==0)
        cout << 0 << el;
        else if(sum==1 or sum==2 or sum==3)
            cout << 1 << el;
            else
                cout << 2 << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}