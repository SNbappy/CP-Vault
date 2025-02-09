/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-19 12:41:01

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
    vector<ll> a;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back(make_pair(a[i], a[i+n]));
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ans += abs(v[i].first - v[i - 1].first) + abs(v[i].second - v[i - 1].second);
    }
    cout << ans << el;
    for(auto x:v){
        cout << x.first << " " << x.second << el;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}