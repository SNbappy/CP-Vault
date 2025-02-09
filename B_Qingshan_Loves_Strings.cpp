/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-20 21:16:27

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

    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool ok = true;
    for (ll i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ok = false;
            break;
        }
    }
    if (ok)
        yes;
    else
    {
        ok = true;
        for (ll i = 0; i < m; i++)
        {
            if (t[i] == t[i + 1])
            {
                ok = false;
                break;
            }
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] and (s[i] == t[0] or s[i] == t[m - 1]))
            {
                ok = false;
                break;
            }
        }
        if (ok)
            yes;
        else
            no;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}