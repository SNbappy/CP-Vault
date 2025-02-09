/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-03 05:12:59

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

    ll a, b, c;
    cin >> a >> b >> c;
    int one=0, two=0, three=0;
    if(abs(b-c)%2==0)
        one = 1;
        if(abs(c-a)%2==0)
            two = 1;
            if(abs(a-b)%2==0)
                three = 1;
            cout << one << " " << two << " " << three << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}