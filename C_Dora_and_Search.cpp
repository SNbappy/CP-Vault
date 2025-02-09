/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-12 05:43:23
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
#define rall(n) n.rbegin(), n.rend()
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

    // if (n == 1)
    // {
    //     cout << -1 << el;
    //     return;
    // }

    ll l = 0, r = n - 1, vl = 1, vr = n;

    while (l <= r)
    {
        if (a[l] == vl)
        {
            l++;
            vl++;
        }
        else if (a[l] == vr)
        {
            l++;
            vr--;
        }
        else if (a[r] == vl)
        {
            r--;
            vl++;
        }
        else if (a[r] == vr)
        {
            r--;
            vr--;
        }
        else
            break;
    }
    if (l <= r)
        cout << l + 1 << " " << r + 1 << el;
    else
    {
        cout << -1 << el;
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