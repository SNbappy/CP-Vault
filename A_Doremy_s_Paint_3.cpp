/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-22 11:42:08

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
    ll a[n];
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    if (m.size() <= 2)
    {
        if(m.size()==1)
            yes;
        else{
        auto it = m.begin();
        ll freq1 = it->second;
        ++it;
        ll freq2 = it->second;

        if (abs(freq1 - freq2) <= 1)
            yes;
        else
            no;
        }
    }
    else
    {
        no;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}