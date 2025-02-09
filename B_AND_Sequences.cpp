/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-10 05:34:18
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
    ll n, cnt = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll min1 = *min_element(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        if(min1 == a[i])
            cnt++;

        if((min1&a[i]) != min1){
            cout << 0 << el;
            return;
        }
    }
    ll fact = 1;
    for (ll i = 1; i <= n - 2; i++)
    {
        fact = (fact * i) % MOD;
    }
    ll ans = (cnt * (cnt - 1)) % MOD;
    ans = (fact * ans) % MOD;
    cout << ans << el;
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