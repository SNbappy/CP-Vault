/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-22 16:27:17
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

/************************************************************/

void Beche_achi()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    vector<ll> pref_sum;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        pref_sum.push_back(sum);
    }
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll new_sum;
        if(l!=1)
        new_sum = sum - (pref_sum[r-1] - pref_sum[l - 2]) + (r - l + 1) * k;
        else
        {
            new_sum = sum - (pref_sum[r - 1]) + (r - l + 1) * k;
        }
        
        if (new_sum % 2)
            yes;
        else
            no;
    }
}

Depressed_C0der
{
    tst
    Beche_achi();

    Goodbye
}
