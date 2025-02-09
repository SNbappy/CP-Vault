/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-05 18:53:54
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

    ll n, r, b;
    cin >> n >> r >> b;
    ll p = r / (b + 1);
    ll q = r % (b + 1);
    for (ll i = 0; i < q; i++)
    {
        cout << string(p + 1, 'R') << 'B';
    }
    for (ll i = q; i < b; i++)
    {
        cout << string(p, 'R') << 'B';
    }
    cout << string(p, 'R') << el;
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