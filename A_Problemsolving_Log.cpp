/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-06 22:46:51

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
    map<char, ll> ma;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        ma[i] = 0;
    }

    for (ll i = 0; i < n; i++)
    {
        ma[s[i]]++;
    }
    ll cnt = 0;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if(ma[i]>=(i-'A'+1))
            cnt++;
    }
    cout << cnt << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}