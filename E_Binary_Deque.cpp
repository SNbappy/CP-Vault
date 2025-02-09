/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-12 15:54:23
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

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n), p(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = n + 1;
    ll cnt = 0;
    for (ll i = 0, j = 0; i < n; i++)
    {
        while (j < n && cnt + a[j] <= s)
        {
            cnt += a[j];
            j++;
        }
        if (cnt == s)
        {
            ans = min(ans, n - j + i);
        }
        cnt -= a[i];
    }
    if(ans > n){
        ans = -1;
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