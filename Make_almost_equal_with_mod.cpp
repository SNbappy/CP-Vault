/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-30 18:36:04

E-mail: bappy.just@gmail.com

*/

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

void solve()
{

    ll n, res = 2;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (1)
    {
        set<ll> remainder;
        for (ll i = 0; i < (ll)v.size(); i++)
        {
            remainder.insert(v[i] % res);
        }
        if ((ll)remainder.size() == 2)
            break;
        res *= 2;
    }
    cout << res << el;
}

int main()
{

    tst
    solve();
    return 0;
}