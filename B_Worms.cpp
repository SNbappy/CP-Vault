/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-09 17:27:54
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
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            v.pb(make_pair(1, a[i]));
        }
        else
        {
            v.pb(make_pair(1 + v[i - 1].second, a[i] + v[i - 1].second));
        }
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        ll left = 0, right = n - 1, ans = 0;
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            if (x >= v[mid].first and x <= v[mid].second)
            {
                ans = mid;
                break;
            }
            else if (x > v[mid].second)
                left = mid + 1;
            else
                right = mid - 1;
        }
        cout << ans + 1 << el;
    }
    
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