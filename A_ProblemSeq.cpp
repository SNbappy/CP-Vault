/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-30 07:32:01
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

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    ll sum = 0;
    for (ll i = 0; i < n; i += 2)
    {
        sum += a[i];
    }
    for (ll i = 1; i < n; i += 2)
    {
        sum -= a[i];
    }
    cout << sum << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}