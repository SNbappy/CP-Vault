/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-17 21:16:49

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

    ll n, m, k;
    cin >> n >> m >> k;
    ll x, y;
    cin >> x >> y;
    string ans = "YES";
    for (int i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        if(((x+y)&1)==((a+b)&1)){
            ans = "NO";
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