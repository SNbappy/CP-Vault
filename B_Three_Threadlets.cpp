/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-08 01:45:43

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
    vector<ll> a(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if(a[1]%a[0]==0 and a[2]%a[0]==0)
    {
        ll p = a[1] / a[0] + a[2] / a[0];
        if(p<=5){
            yes;
        }
        else
            no;
    }
    else
        no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}