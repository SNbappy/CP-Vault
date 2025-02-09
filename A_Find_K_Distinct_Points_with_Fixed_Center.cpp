/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 14:39:15
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

    ll x, y, k;
    cin >> x >> y >> k;
    vector<ll> a, b;
    ll suma = 0, sumb = 0;
    if (k == 1)
    {
        cout << x << " " << y << el;
        return;
    }
    for (ll i = 1; i < k; i++)
    {
        a.push_back(x + i);
        b.push_back(y + i);
        suma += x + i;
        sumb += y + i;
    }

    ll aLast = (x * k) - suma;
    ll bLast = (y * k) - sumb;
    a.push_back(aLast);
    b.push_back(bLast);
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i] << " " << b[i] << el;
    }
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