/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-20 23:32:45
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

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(n + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= n)
        {
            b[a[i]]++;
        }
    }

    sort(b.begin(), b.end());

    ll x = n - b[n];
    
    cout << x << endl;
}

Depressed_C0der
{

   tst
   Beche_achi();

    Goodbye
}