/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-29 22:48:24
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

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void Beche_achi()
{

    ll n;
    cin >> n;
    vector<ll> a(n);
    bool allZero = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
            allZero = false;
    }

    if (allZero)
    {
        for (ll k = 1; k <= n; k++)
        {
            cout << k << " ";
        }
        cout << el;
        return;
    }

    const ll B = 30;
    vector<ll> bitCount(B, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < B; j++)
        {
            if (a[i] & (1u << j))
            {
                bitCount[j]++;
            }
        }
    }

    ll d = 0;
    for (ll j = 0; j < B; j++)
    {
        if (bitCount[j] > 0)
        {
            if (d == 0)
                d = bitCount[j];
            else
                d = gcd(d, bitCount[j]);
        }
    }

    vector<ll> ans;
    for (ll k = 1; k <= d; k++)
    {
        if (d % k == 0)
            ans.push_back(k);
    }

    for (auto k : ans)
        cout << k << " ";
    cout << el;
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