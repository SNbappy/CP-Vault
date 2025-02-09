/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-29 18:58:49
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
#define pb push_back

/************************************************************/

void Beche_achi()
{

    ll n, d;
    cin >> n >> d;
    vector<ll> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.rbegin(), p.rend());
    ll players = 0, wins = 0, i = 0;
    while(i<n && players <=n){
        ll x = ceil((double)(d + 1) / p[i]);
        players += x;
        if(players <= n)
            wins++;
        i++;
    }
    cout << wins << el;
}


Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}