/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-23 01:50:11
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

/************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==1)
            a[i]++;
    }
    for (ll i = 0; i < n-1; i++)
    {
        if(a[i+1]%a[i]==0){
            a[i+1] += 1;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << el;
}

Depressed_C0der
{

   tst
   Beche_achi();

    Goodbye
}