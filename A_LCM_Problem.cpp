/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-29 19:17:04

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
    int l, r;
    cin >> l >> r;
    if(l*2<=r)
        cout << l << " " << 2*l << el;
        else
            cout << -1 <<" "<< -1 << el;
}

int main()
{
    tst
    solve();
    return 0;
}
