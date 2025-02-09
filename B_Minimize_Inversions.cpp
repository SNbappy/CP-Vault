/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-05 10:14:34

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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        mp[v[i]] = b;
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << el;
    for (ll i = 0; i < n; i++)
    {
        cout << mp[v[i]] << " ";
    }
    cout << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}