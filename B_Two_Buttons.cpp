/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-07 21:22:52
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

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    ll n, m;
    cin >> n >> m;

    ll ans = 0, r = 0, p = 2, x = 0;
    // x+r
    if(n>=m)
    cout << abs(n - m) << el;
    else{
        if(m%2==0){
            r = n - m / 2 + 1;
        }
        while(n>=m){
            n *= p;
            p++;
            x++;
        }
        ans = abs(n - m) + x;
    }

}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   //tst
   Beche_achi();

    Goodbye
}