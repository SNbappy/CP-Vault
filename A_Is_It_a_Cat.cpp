/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 23:57:27

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

    int n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    s.erase(unique(s.begin(), s.end()),s.end());
    if(s=="meow")
        yes;
        else
            no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}