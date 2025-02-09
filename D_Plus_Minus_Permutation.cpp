/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-07 19:53:18
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

ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}

void Beche_achi()
{

    ll n, x, y;
    cin >> n >> x >> y;
    ll a = n / x;
    ll b = n / y;
    ll lcm = (x * y) / __gcd(x, y);
    ll c = n / lcm;
    ll a1 = a - c;
    ll b1 = b - c;
    cout << (sum(n) - sum(n - a1)) - sum(b1) << el;
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