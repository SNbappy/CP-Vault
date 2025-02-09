/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 23:16:57
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
    bool allEven = true, allOdd = true;
    ll oddMx = 0, evenMx = 0;
    ll even = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            
            even++;
            allEven = false;
            evenMx = max(evenMx, a[i]);
        }
        else
        {
            allOdd = false;
            oddMx = max(oddMx, a[i]);
        }
    }
    sort(all(a));
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < oddMx)
        {
            oddMx += a[i];
        }
    }

    if (allEven || allOdd)
        cout << 0 << el;
    else if (oddMx > evenMx)
        cout << even << el;
    else
    {
        cout << even + 1 << el;
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