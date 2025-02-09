/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 22:30:10
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
#define all(n) n.begin(),n.end()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < 4*n; i++)
    {
        if(s[i]=='A')
            a++;
        if(s[i]=='B')
            b++;
        if(s[i]=='C')
            c++;
        if(s[i]=='D')
            d++;
        if(a>=n)
            a = n;
        if(b>=n)
            b = n;
        if(c>=n)
            c = n;
        if(d>=n)
            d = n;
    }
    cout << a + b + c + d << el;
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