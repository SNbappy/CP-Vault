/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-06 13:22:37

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
    vector<ll> v(n);
    ll res = 0;
    ll cur = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] > cur)
            res += v[i] - cur;
        cur = v[i];
    }

    cout << res - 1 << endl;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}