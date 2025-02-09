/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 23:06:31

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
    map<char, ll> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll i = 0; i < (ll)s.size(); i++)
        {
            m[s[i]]++;
        }
    }
    bool ok = false;
    for (auto x : m)
    {
        if(x.second%n!=0){
            ok = true;
        }
    }
    if(ok)
        no;
        else
            yes;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}