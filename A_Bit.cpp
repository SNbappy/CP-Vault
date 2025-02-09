/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-28 17:25:32

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
    ll n, cnt = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s[0]=='+' or s[2]=='+')
            cnt++;
            else
                cnt--;
    }
    cout << cnt << el;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}