/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-06 20:48:44

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
    ll st = 0, end = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='B')
        {
            st = i;
            break;
        }
    }
    for (ll i = s.size(); i >= 0; i--)
    {
        if(s[i]=='B'){
            end = i;
            break;
        }
    }
    // if(abs(st-end)!=0){
        cout << end - st + 1 << el;
    // }
    // else
    //     cout << 0 << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}