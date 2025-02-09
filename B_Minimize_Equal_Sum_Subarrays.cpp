/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 14:58:46
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
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == n)
            a[i] = 1;
        else
            a[i]++;
        cout << a[i] << " ";
    }

    cout << el;
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