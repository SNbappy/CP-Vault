/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-11 19:55:55
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
#define rall(n) n.rbegin(),n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    ll n, m;
    cin >> n >> m;
    vector<ll> a[m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            a[j].push_back(x);
        }
        
    }
    
    for (ll i = 0; i < m; i++)
    {
        sort(a[i].begin(), a[i].end());
    }

    ll ans = 0;

    for (int i = 0; i < m; i++)
    {
        vector<ll> res(n, 0);

        res[n - 1] = a[i][n - 1];
        for (ll j = n - 2; j >= 0; j--)
        {
            res[j] = res[j + 1] + a[i][j];
        }

        for (ll j = 0; j < n - 1; j++)
        {
            ll cnt = res[j + 1] - (n - 1 - j) * a[i][j];

            ans += cnt;
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