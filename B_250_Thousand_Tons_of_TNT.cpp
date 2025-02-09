/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-16 13:05:39
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

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i * i != n)
                divs.push_back(n / i);
        }
    }
    ll ans = 0;
    sort(divs.begin(), divs.end());
    for(auto segSize:divs){
        ll mx = 0, mn = LLONG_MAX;
        ll cnt = 0;
        ll gain = 0;
        for (ll i = 0; i < n; i++)
        {
            gain += a[i];
            cnt++;
            if(cnt==segSize){
                mx = max(mx, gain);
                mn = min(mn, gain);
                cnt = 0;
                gain = 0;
            }
        }
        ans = max(ans, mx - mn);
    }
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