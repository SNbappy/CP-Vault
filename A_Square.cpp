/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-16 20:11:52

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

    ll x[4], y[4];
    for (ll i = 0; i < 4; i++)
    {
        cin >> x[i] >> y[i];
        
    }
    ll cnt = x[0],cmt=0;
    for (ll i = 0; i < 4; i++)
    {
        if(x[i]!=cnt){
            cmt = cnt - x[i];
            break;
        }
    }
    ll sq = cmt * cmt;
    cout << sq << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}