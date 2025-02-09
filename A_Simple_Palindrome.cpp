/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 20:37:51
*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    ll n;
    cin >> n;
    string str = "aeiou";
    vector<ll> cnt(50000, 0);
    for (ll i = 0; i < n; i++)
    {
        cnt[i % 5]++;
    }
    string ans = "";
    for (ll i = 0; i < 5; i++)
    {
        ans += string(cnt[i], str[i]);
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
