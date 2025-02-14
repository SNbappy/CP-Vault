/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-07 21:40:21
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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for (ll i = 1; i < n; i++)
    {
        cin >> b[i];
        a[i - 1] |= b[i];
        a[i] |= b[i];
    }
    bool val = 1;
    for (ll i = 1; i < n; i++)
    {
        if((a[i - 1]&a[i]) != b[i])
            val = false;
    }
    if(!val){
        cout << -1 << el;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << el;
    }
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