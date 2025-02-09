/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-19 11:53:20

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
    string s;
    cin >> s;
    ll ans = -1;
    for (ll k = 1; k < n; k++)
    {
        ll a = 0, b = 0;
        for (ll i = 0; i < k; i++)
        {
            if (s[i] == 'L')
                a++;
        }
        for (ll i = k; i < n; i++)
        {
            if (s[i] == 'L')
                b++;
        }
        if (a != b and k - a != (n - k) - b)
        {
            ans = k;
            break;
        }
    }
    cout << ans << el;
}

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}