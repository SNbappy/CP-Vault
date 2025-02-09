/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-26 20:05:14
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
    vector<ll> a(n), pref_sum(n);
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            cnt++;
            a[i] = abs(a[i]);
        }
    }
    sort(all(a));
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (a[i]);
    }
    if (cnt & 1)
        cout << sum - 2 * (a[0]) << el;
    else
        cout << sum << el;
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