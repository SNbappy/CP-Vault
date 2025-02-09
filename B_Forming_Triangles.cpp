/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-18 20:59:42

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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    ll total = 0;
    for(auto it: mp){
        ll k = it.second;
        total += k * (k - 1) * (k - 2) / 6;
        ll idx = lower_bound(v.begin(), v.end(), it.first) - v.begin();
        total += (k * (k - 1) / 2) * idx;
    }
    cout << total << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}