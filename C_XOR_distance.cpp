/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-09 18:43:35
*/

#include <bits/stdc++.h>
using namespace std;

#define tst \
    int t; \
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
    ll x, y, r;
    cin >> x >> y >> r;
    if (x > y)
    {
        swap(x, y);
    }

    ll cnt = 0, ok = true;

    for (ll i = 63; i >= 0; i--)
    {
        if ((x >> i & 1) != (y >> i & 1))
        {
            if (ok)
            {
                ok = false;
            }
            else if (cnt + (1LL << i) <= r and !(x >> i & 1))
            {
                ok = false;
                x ^= (1LL << i);
                y ^= (1LL << i);
                ok = false;
                cnt += (1LL << i);
            }
        }
    }
    cout << abs(x - y) << endl;
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