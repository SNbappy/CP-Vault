/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 06:19:25
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

    ll temp = n;

    ll x = 0;
    ll i = 1;
    while (temp != 0)
    {
        ll p = temp % 10;
        if (p >= 5)
        {
            if (p == 9 and temp/10==0)
                x += p * i;
            else
                x += (9 - p) * i;
        }
        else
            x += p * i;
        i *= 10;
        temp /= 10;
    }
    cout << x << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}