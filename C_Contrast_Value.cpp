/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-11 07:23:15
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

void Beche_achi()
{

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto b = unique(a.begin(), a.end());

    a.erase(b, a.end());

    ll x = a.size();
    ll y = a.size();
    ll cnt = 0;
    for (ll i = 0; i < a.size() - 1; i++)
    {
        if(a[i]>a[i+1]){
            cnt++;
        }
        else
            cnt = 0;
        if(cnt>1){
            x--;
        }
    }
    cnt = 0;
    for (ll i = 0; i < a.size() - 1; i++)
    {
        if(a[i] < a[i+1])
            cnt++;
        else
            cnt = 0;
        if(cnt > 1){
            x--;
        }
    }
    
    
    cout << x << el;
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