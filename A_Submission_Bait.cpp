/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-08 19:52:56
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

    sort(rall(a));

    ll x = 1;
    ll ok = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            x++;
        }
        else
        {
            if (x % 2 == 1)
            {
                ok = 0;
                break;
            }
            else
            {
                x = 1;
            }
        }
    }

    if (x % 2 == 1 && ok)
    {
        yes;
        return;
    }
    if(ok)
        no;
    else
    {
        yes;
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