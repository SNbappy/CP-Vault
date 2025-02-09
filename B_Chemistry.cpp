/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-08 01:13:32

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

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, ll> m;
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    ll cnt = 0;
    for (auto [x,y]: m)
    {
        if(y%2!=0)
            cnt++;
    }
    if((n-k)%2==0){
        if(cnt<=k)
            yes;
            else
                no;
    }
    else if(cnt<=(k+1))
        yes;
        else
            no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}