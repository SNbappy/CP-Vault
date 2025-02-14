/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 08:22:01
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
    string s, st;
    cin >> s >> st;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        if (s[i] != st[i] and cnt <= 0)
        {
            no;
            return;
        }
    }
    yes;
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