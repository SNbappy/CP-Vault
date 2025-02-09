/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-27 21:19:52
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
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll temp = (i + 1) * (n - i) - 1;
        mp[temp]++;
        if (i > 0)
        {
            ll temp2 = (n - i) * i;
            mp[temp2] += v[i] - v[i - 1] - 1;
        }
    }
    while (q--)
    {
        ll k;
        cin >> k;
        if (mp.find(k) == mp.end())
            cout << 0 << " ";
        else
            cout << mp[k] << " ";
    }
    cout << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}