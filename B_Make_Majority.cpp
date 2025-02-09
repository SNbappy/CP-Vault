/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-13 20:25:17
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
    string s;
    cin >> n >> s;
    ll zeros = 0, ones = 0;
    ll maxlen = 1, cons = 1;
    vector<ll> duibar;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zeros++;
        else
            ones++;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '1' and s[i - 1] == '1')
        {
            cons++;
            maxlen = max(cons, maxlen);
        }
        else
        {
            if (cons >= 2)
                duibar.push_back(cons);
            cons = 1;
        }
    }

    if (ones > zeros)
        yes;
    else
    {
        if (s[0] == '1' and s[s.size() - 1] == '1')
            yes;
        else if (maxlen > 2)
            yes;
        else if (duibar.size() > 1)
        {
            yes;
        }
        else if (maxlen > 1 and (s[0] == '1' || s[n - 1] == '1'))
            yes;
        else
            no;
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

    tst
    Beche_achi();

    Goodbye
}