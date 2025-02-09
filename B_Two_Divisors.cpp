/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-31 21:42:02

E-mail: bappy.just@gmail.com

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

void solve()
{

    ll a, b;
    cin >> a >> b;
    ll x = a * b / __gcd(a, b);
    if(x==b)
        cout << x * b / a << el;
        else
            cout << x << el;
}

int main()
{

    tst
    solve();
    return 0;
}