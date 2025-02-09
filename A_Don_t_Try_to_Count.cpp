/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-22 19:13:50

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

    ll n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    ll cnt = 0;
    while(x.size()<=n*m+10 and x.find(s)==string::npos){
        cnt++;
        x += x;
    }
    if(x.find(s)==string::npos){
        cout << -1 << el;
    }
    else
    cout << cnt << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}