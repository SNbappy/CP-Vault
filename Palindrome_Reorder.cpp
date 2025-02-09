/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-22 05:47:56
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
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    string s;
    cin >> s;
    ll cnt = 0;
    map<char, ll> mp;

    for (ll i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto c : mp)
    {
        if (c.second % 2 != 0)
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION" << el;
    }
    else
    {
        string first = "", second = "", mid = "";
        for (auto c : mp)
        {
            if (c.second % 2)
                mid = string(1, c.first);

            first += string(c.second / 2, c.first);
        }
        second = first;
        reverse(second.begin(), second.end());
        cout << first + mid + second << el;
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