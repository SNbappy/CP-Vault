/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 16:24:20

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
    string s;
    cin >> s;
    ll sum = 0;
    for (ll i = 0; i < (ll)s.size(); i++)
    {
        if(s[i]=='-'){
            sum += -1;
        }
        else
            sum += 1;
    }
    if(sum<0)
        cout << sum * (-1) << el;
        else
            cout << sum << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}