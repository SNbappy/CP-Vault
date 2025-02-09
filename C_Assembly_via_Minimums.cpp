/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-10 05:40:55
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
    ll total = (n * (n - 1)) / 2;
    vector<ll> b(total);
    for (ll i = 0; i < total; i++)
    {
        cin >> b[i];
    }
    sort(all(b));
    ll last = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        cout << b[last] << " ";
        last += n - i - 1;
    }

    ll max = 1e9;
    cout << max << el;
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