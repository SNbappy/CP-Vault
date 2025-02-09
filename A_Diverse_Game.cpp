/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 07:40:23
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

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n * m);
    vector<ll> b;

    for (ll i = 0; i < m * n; i++)
    {
        cin >> a[i];
    }

    if (n == 1 and m == 1)
    {
        cout << -1 << el;
        return;
    }

    b.push_back(a[m * n - 1]);

    for (ll j = 0; j < m * n - 1; j++)
    {
        b.push_back(a[j]);
    }

    ll cnt = 0;

    for (ll i = 0; i < n * m; i++)
    {
        cout << b[i] << " ";
        cnt++;

        if (cnt == m)
        {
            cout << el;
            cnt = 0;
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