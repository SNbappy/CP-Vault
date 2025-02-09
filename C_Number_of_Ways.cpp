/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-16 20:15:09
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

    ll n;
    cin >> n;
    vector<ll> s(n);
    s[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        s[i + 1] = s[i] + a;
    };
    ll ans = 0;
    if (s[n] % 3 == 0)
    {
        ll u = s[n] / 3, v = 2 * s[n] / 3;
        ll cnt = 0;
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == v)
            {
                ans += cnt;
                // cout << ans << " ";
            }
            if (s[i] == u)
            {
                cnt++;
                // cout << cnt << " ";
            }
        }
    }
    cout << ans << el;
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //tst
   Beche_achi();

    Goodbye
}