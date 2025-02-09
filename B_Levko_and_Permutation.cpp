/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-06 14:13:12

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
    if(n==k){
        cout << -1 << el;
        return;
    }
    for (int i = 1; i < n-k; i++)
    {
        cout << i + 1 << " ";
    }
    cout << "1 ";
    for (int i = n-k+1; i <= n; i++)
    {
        cout << i << " ";
    }
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}