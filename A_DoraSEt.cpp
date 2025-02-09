/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-30 20:48:03
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

/************************************************************/

void Beche_achi()
{

    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll players = l;
    if (l % 2)
    {
        players = l - 1;
        while (1)
        {
            
            players += 3;
            if (players <= r)
                ans++;
            else
                break;
            players++;
        }
    }
    else
    {
        players = l;
        while (1)
        {
            players += 3;
            if (players <= r)
                ans++;
            else
                break;
            players++;
        }
    }
    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}