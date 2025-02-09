/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 18:12:11
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

    map<ll, ll> mp;
    vector<ll> b(1000);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        char y;
        cin >> x >> y;

        b[x]++;
        // cout << b[x] << el;
        if (b[x] == 1 && y == 'M')
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
            if (y == 'F')
                b[x]--;
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

    // tst
    Beche_achi();

    Goodbye
}