/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-26 18:12:52

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

    ll n, k, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='B'){
            i += k-1;
            cnt++;
        }
    }
    cout << cnt << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}