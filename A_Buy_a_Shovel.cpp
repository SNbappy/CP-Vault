/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-02 21:22:22

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

    ll k, r;
    cin >> k >> r;
    ll cnt = 1;
    while(1){
        ll p = k * cnt;
        if(p % 10 == r || p % 10 == 0)
            break;
        else
            cnt++;
    }
    cout << cnt << el;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}