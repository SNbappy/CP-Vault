/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-19 06:31:06
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

    ll n, k, sum = 0, b;
    cin >> n >> k;
    vector<ll> v, pre(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> b;
        v.push_back(b);
    }
    ll maxi = 0;
    sort(all(v));
    for (ll i = 0; i < n; i++)
    {
        // sum += v[i];
        pre[i + 1] = pre[i] + v[i];
    }
    for (ll i = 0; i <= k; i++)
    {
        maxi = max(maxi, pre[n - i] - pre[2 * (k - i)]);
    }
    cout << maxi << el;
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