/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-30 20:51:49

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

    ll n, k, mul=1;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
        mul *= a[i];
    }
    double f = (double)2023 / mul;
    ll p = 2023 / mul;
    if(f==p){
        yes;
        for (ll i = 0; i < k-1; i++)
        {
            cout << 1 << " ";
        }

        cout << p << el;
    }
        else
            no;
}

int main()
{

    tst
    solve();
    return 0;
}