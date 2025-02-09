/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-28 19:57:01
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
#define all(n) n.begin(),n.end()
#define pb push_back

/************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    ll a = 1;
    for (ll i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            a = n / i;
            break;
        }
    }
    cout << a << ' ' << n - a << el;
}

Depressed_C0der
{

   tst
   Beche_achi();

    Goodbye
}