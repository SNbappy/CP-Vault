/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-01 05:46:05
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
#define all(n) n.begin(), n.end()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> a(n);
    a[0] = k * b;
    s -= k * b;
    if(s < 0)
        cout << -1 << el;
    else{
        for (ll i = 0; i < n; i++)
        {
            ll now = min(k - 1, s);
            a[i] += now;
            s -= now;
        }
        if(s > 0){
            cout << -1 << el;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << el;
        }
        
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}