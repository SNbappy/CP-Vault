/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-04 16:51:20

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
    bool ok = false;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> m;
    ll s = 0;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
            a[i] = -a[i];
        s += a[i];
        if(m[s]){
            yes;
            ok = true;
            break;
        }
        m[s]++;
    }
    if(!ok)
        no;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}