/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-05 14:21:46
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

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0;
    ll s = 0, v = 0;
    ll l = 0, r = n - 1;
    ll cnt = 0;
    while (l <= r)
    {
        cnt++;
        if (cnt % 2)
        {
            if (a[l] > a[r])
            {
                s += a[l];
                l++;
            }
            else
            {
                s += a[r];
                r--;
            }
        }
        else
        {
            if (a[l] > a[r])
            {
                v += a[l];
                l++;
            }
            else
            {
                v += a[r];
                r--;
            }
        }
    }
    cout << s << " " << v << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}