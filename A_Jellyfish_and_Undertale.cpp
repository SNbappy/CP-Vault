/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-08 12:29:55

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

    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]<a){
            sum += v[i];
        }
        else{
            sum += a - 1;
        }
    }
    cout << sum + b << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}