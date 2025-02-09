/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-18 06:50:34
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

    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    ll c = abs(x[a - 1] - x[b - 1]) + abs(y[a - 1] - y[b - 1]);
    vector<ll> d;
    for (ll i = 0; i < k; i++)
    {
        d.push_back(abs(x[i] - x[b - 1]) + abs(y[i] - y[b - 1]));
    }
    sort(all(d));
    vector<ll> e;
    for (ll i = 0; i < k; i++)
    {
        e.push_back(abs(x[i] - x[a - 1]) + abs(y[i] - y[a - 1]));
    }
    sort(all(e));
    if (d.size() != 0 && e.size()!=0)
    {
        if (d[0] + e[0] < c)
            c = d[0] + e[0];
    }
    cout << c << el;
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