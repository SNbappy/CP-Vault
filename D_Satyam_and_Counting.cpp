/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-03 21:14:00
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
#define all(n) n.begin(),n.end()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    ll n, x, y;
    cin >> n;
    unordered_map<ll, ll> m0;
    unordered_map<ll, ll> m1;
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (y == 0)
        {
            m0[x]++;
        }
        else
        {
            m1[x]++;
        }
    }
    ll ans = 0;
    for (auto temp : m0)
    {
        if (m1.count(temp.first) > 0)
        {
            ans += n - 2;
        }
    }
    for (auto temp : m0)
    {
        ll x1 = temp.first - 1;
        ll x2 = temp.first + 1;
        if (m1.find(x1) != m1.end() && m1.find(x2) != m1.end())
        {
            ans++;
        }
    }

    for (auto temp : m1)
    {
        ll x1 = temp.first - 1;
        ll x2 = temp.first + 1;
        if (m0.find(x1) != m0.end() && m0.find(x2) != m0.end())
        {
            ans++;
        }
    }

    cout << ans << endl;
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