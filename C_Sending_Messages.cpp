/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-16 20:38:20

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

    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    ll m[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    ll previous = 0, mini = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        mini = min(b, abs(previous - m[i]) * a);
        f -= mini;
        previous = m[i];
    }
    if(f>0)
        yes;
    else
        no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}