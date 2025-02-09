/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-09 18:12:07
*/

#include <bits/stdc++.h>
using namespace std;

#define tst \
    int t; \
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> s(n);
    s[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        s[i] = s[i - 1] ^ a[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        ll a = s[i];
        ll b = s[n - 1] ^ a;
        if(a == b)
        {
            yes;
            return;
        }
    }
    for (ll i = 0; i < n - 2; i++)
    {
        ll a = s[i];
        for (ll j = i + 1; j < n - 1; j++)
        {
            ll b = s[i] ^ s[j];
            ll c = s[j] ^ s[n - 1];
            if(a == b and b == c){
                yes;
                return;
            }
        }
        
    }
    no;
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