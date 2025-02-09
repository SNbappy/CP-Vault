/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 08:20:02
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
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    ll n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<array<ll, 26>> pre(n + 1);
    for (ll i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i];
        pre[i + 1][a[i] - 'a']++;
        pre[i + 1][b[i] - 'a']--;
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;

        ll ans = 0;
        for (ll c = 0; c < 26; c++)
        {
            ans += max(0LL, pre[r][c] - pre[l][c]);
        }
        cout << ans << el;
    }
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