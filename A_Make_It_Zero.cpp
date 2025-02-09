/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-14 16:59:09

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

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n%2==0){
        cout << 2 << el;
        cout << 1 << " " << n << el;
        cout << 1 << " " << n << el;
    }
    else{
        cout << 4 << el;
        cout << 1 << " " << n - 1 << el;
        cout << 1 << " " << n - 1 << el;
        cout << n - 1 << " " << n << el;
        cout << n - 1 << " " << n << el;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}