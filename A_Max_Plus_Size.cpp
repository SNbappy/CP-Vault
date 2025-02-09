/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-27 19:36:12
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
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b.push_back(a[i]);
    }
    sort(all(b));
    bool ok = true;
    ll x = b[n - 1];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            if ((i + 1) % 2 != 0)
            {
                ok = false;
                // cout << x << "YO" << " ";
            }
        }
    }
    if (n % 2 == 0)
    {
        cout << x + (n) / 2 << el;
    }
    else
    {
        if (ok == true)
        {
            cout << x + n / 2 << el;
            // cout << n / 2 << el;
        }
        else
        {
            cout << x + n / 2 + 1 << el;
        }
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