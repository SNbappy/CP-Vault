/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-21 14:11:36
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
#define rall(n) n.rbegin(),n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void knightPosition(ll x){
    ll p = x * x * (x * x - 1) / 2;
    ll q = 4 * (x - 1) * (x - 2);
    cout << p - q << el;
}

void Beche_achi()
{

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        knightPosition(i);
    }
    
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //tst
   Beche_achi();

    Goodbye
}