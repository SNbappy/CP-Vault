/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-05 07:02:26
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

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll w = 0, b = 0, seg_len = 0;
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        seg_len++;
        if (s[i] == 'B')
            b++;
        if(s[i] == 'W')
            w++;
        if (seg_len >= k)
        {
            if (s[i - k] == 'B')
                b--;
            if(s[i - k] == 'W')
                w--;
            ans = min(ans, w);
            seg_len--;
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