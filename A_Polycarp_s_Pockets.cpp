/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 01:19:32

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
    vector<ll> v(n);map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    ll max = 1;
    for (auto [x,y] : m)
    {
        if(max<y){
            max = y;
        }
    }
    cout << max << el;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}