/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-04 19:22:51

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
    ll sum = 0;
    if (n % (ll)2050 == 0)
    {
        ll p = (n / (ll)2050);

        while(p!=0){
            sum += p % 10;
            p /= 10;
        }

        cout << sum << el;
    }
        else
            cout << -1 << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}