/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-30 21:11:20
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
#define all(n) n.begin(),n.end()
#define pb push_back

/************************************************************/

void Beche_achi()
{

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    ans = a[n - 1];

    for (ll i = 0; i < m; i++)
    {
        char c;
        ll l, r;
        cin >> c >> l >> r;
        if (l <= ans && ans <= r)
        {

            if (c == '-')
                ans--;
            else
                ans++;
        }
        cout << ans << " ";
    }
    cout << el;
}

Depressed_C0der
{

   tst
   Beche_achi();

    Goodbye
}