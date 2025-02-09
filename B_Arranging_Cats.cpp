/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-16 20:18:24

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
    vector<char> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll cnt = 0, cmt=0;
    for (ll i = 0; i < n; i++)
    {
        if(a[i]=='0' and b[i]=='1')
            cnt++;
        if(a[i]=='1' and b[i]=='0')
            cmt++;
    }
    if(cmt>cnt)
        cout << cmt << el;
        else
            cout << cnt << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}