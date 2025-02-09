/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-06 07:38:34
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

    ll n;
    cin >> n;
    vector<ll> a(n), pref_sum(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        pref_sum[i] = a[i];
    }
    for (ll i = 1; i < n; i++)
    {
        pref_sum[i] += pref_sum[i - 1];
    }

    string s;
    cin >> s;

    ll l = 0, r = n - 1, ans = 0;

    while (l <= r)
    {
        if (s[l] == 'R')
        {
            l++;
        }
        else
        {
            if (s[r] == 'L')
                r--;
            else
            {
                ans += pref_sum[r];
                if (l > 0)
                {
                    ans -= pref_sum[l - 1];
                }
                l++;
                r--;
            }
        }
    }
    cout << ans << el;
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