/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-27 12:38:03
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

void Beche_achi(vector<vector<ll>> &coprime)
{

    ll n;
    cin >> n;
    vector<ll> a(n), last(1001, -1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        last[a[i]] = i + 1;
    }
    ll ans = -1;
    for (ll i = 1; i <= 1000; i++)
    {
        for(auto j : coprime[i]){
            if(last[i]!=-1 && last[j]!=-1){
                ans = max(ans, last[i] + last[j]);
            }
        }
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

    vector<vector<ll>> coprime(1001, vector<ll>());
    for (ll i = 1; i <= 1000; i++)
    {
        for (ll j = 1; j < 1000; j++)
        {
            if(__gcd(i,j)==1){
                coprime[i].pb(j);
            }
        }
        
    }
    

    tst
    Beche_achi(coprime);

    Goodbye
}