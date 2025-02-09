/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-06 23:04:13

*/

//************************************************************************
//************************************************************************

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

//************************************************************************
//************************************************************************

void Beche_achi()
{

        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        for (ll i = n - k; i <= n; i++)
        {
            arr.push_back(i);
        }
        for (ll i = n - k - 1; i >= 1; i--)
            arr.push_back(i);
        for (ll e : arr)
            cout << e << " ";
        cout << el;
    }

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}