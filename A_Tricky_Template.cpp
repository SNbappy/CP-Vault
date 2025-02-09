/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-18 20:35:32

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
    string a, b, c;
    cin >> a >> b >> c;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if(a[i]!=c[i] and b[i]!=c[i])
        {
            cnt = 1;
            break;
        }
    }
    if(cnt)
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