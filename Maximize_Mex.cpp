/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-09 05:25:00
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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    map<ll, ll> mp, mp1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]]++;
    }
    ll cnt = 0;
    while (true)
    {
        if (mp1[cnt] > 0)
        {
            mp1[cnt]--;
            ll f = mp1[cnt];

            mp[cnt % x] += f;

            cnt++;
        }
        else if (mp[cnt % x] > 0)
        {
            mp[cnt % x]--;
            cnt++;
        }
        else
            break;
    }
    cout << cnt << el;
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