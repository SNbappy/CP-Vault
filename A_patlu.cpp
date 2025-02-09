/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-31 15:02:24
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

/************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i = 1; i < n-1; i++)
    {
        if(n%i==0)
            cnt++;
    }
    cout << cnt << el;
}

Depressed_C0der
{

   //tst
   Beche_achi();

    Goodbye
}