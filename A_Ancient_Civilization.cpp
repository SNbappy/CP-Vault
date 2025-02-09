/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-30 14:05:52
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
    ll n, l;
    cin >> n >> l;
    vector<ll> a(n + 3);
    map<ll, ll> one, zero;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];
        for (ll j = 0; j < l; j++)
        {
            if(x&1)
                one[j]++;
                else
                    zero[j]++;
                x = x >> 1;
        }
        
    }
    ll ans = 0;
    for (ll i = 0; i < l; i++)
    {
        if(one[i] > zero[i])
            ans += pow(2, i);
    }
    cout << ans << el;
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