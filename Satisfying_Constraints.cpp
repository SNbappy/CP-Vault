/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-13 20:37:02

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
    ll a[n], x[n];
    ll max = INT_MIN;
    ll min = INT_MAX;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> x[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if(a[i]==1){
            if(x[i]>max){
                max = x[i];
            }
        }
        if(a[i]==2){
            if(x[i]<min){
                min = x[i];
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if(a[i]==3){
            if(x[i]<=min and x[i]>=max)
                cnt++;
        }
    }
    if(min<max){
        cout << 0 << el;
    }
    else{
    ll p = min-max + 1-cnt;
    cout << p << el;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}