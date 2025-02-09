/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-03 01:18:29

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

    int a, b, n;
    cin >> a >> b >> n;
    int ac = 0, bc = 0;
    while (n>0)
    {
        if(n>0){
        n =n- __gcd(a, n);
        ac++;
        }
        if(n>0){
        n =n- __gcd(b, n);
        bc++;
        }
    }
    if(ac>bc){
        cout << 0 << el;
    }
    else
        cout << 1 << el;
}

int main()
{

    //tst
    solve();
    return 0;
}