/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-08 10:40:52
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

    ll n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 0 << el;
        return;
    }
    ll number = n * 2 - 1;
    ll sum = 0;
    ll highest = n;
    sum += highest;
    if (sum >= k)
    {
        cout << 1 << el;
        return;
    }
    ll cnt = 1;
    for (ll i = highest - 1; i >= 1; i--)
    {
        sum += i;
        cnt++;
        if (sum >= k)
            break;
        sum += i;
        cnt++;
        if (sum >= k)
            break;
    }

    cout << cnt << el;
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