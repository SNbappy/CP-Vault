/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-30 13:48:05
*/

#include <bits/stdc++.h>
using namespace std;

#define tst \
    int t; \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll even = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(!(a[i]&1))
            even++;
    }
    if(even == 0)
        cout << 0 << el;
    else if(even < n)
        cout << even << el;
    else{
        sort(all(a));
        ll x = LLONG_MAX, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            while (a[i] % 2 == 0)
            {
                a[i] /= 2;
                cnt++;
            }
            x = min(x, cnt);
            cnt = 0;
        }
        cout << even + x - 1 << el;
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}