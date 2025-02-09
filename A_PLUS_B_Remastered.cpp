/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-03 21:31:39

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
    ll cnt = 0;
    vector<ll> a(n), b(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    c[0] = a[0] + b[0];
    for (ll i = 0; i < n; i++)
    {
        if (c[0] != (a[i] + b[i]))
            cnt++;
    }
    if (cnt != 0)
        cout << -1 << el;
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << el;
        for (ll i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << el;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}