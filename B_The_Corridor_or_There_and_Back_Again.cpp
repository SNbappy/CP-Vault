/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-14 16:52:01

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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if(y%2==0)
            a[i] = x + y / 2 - 1;
            else
                a[i] = x + y / 2;
    }
    sort(a, a + n);
    cout << a[0] << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}