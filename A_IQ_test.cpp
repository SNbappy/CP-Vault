/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-05 12:32:15
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
    vector<ll> a(n);
    ll even = 0, odd = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if(even == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2==0)
                cout << i + 1 << el;
        }
    }
    else{
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2!=0)
                cout << i + 1 << el;
        }
        
    }
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   //tst
   Beche_achi();

    Goodbye
}