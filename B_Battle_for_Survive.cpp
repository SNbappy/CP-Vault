/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-20 21:42:07
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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i<n-2){
            sum += a[i];
        }
    }
    ll x = a[n - 1] - a[n - 2] + sum;
    cout << x << el;
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   tst
   Beche_achi();

    Goodbye
}