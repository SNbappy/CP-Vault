/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-07 21:40:21
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

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    vector<ll> b;
    ll x = a[0];
    ll y = x | (~0);
    
    b.push_back(y);

    b.push_back(x);

    for (ll i = 2; i < n; i++)
    {
        b.push_back(a[i]);
    }
    for(auto c : b)
        cout << c << " ";
    cout << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}