/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 07:28:16
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
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll t = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    for (ll i = 0; i < n; i++)
    {
        ll d = (a[i].first - x2) * (a[i].first - x2) + (a[i].second - y2) * (a[i].second - y2);
        if (d <= t)
        {
            no;
            return;
        }
    }
    yes;
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