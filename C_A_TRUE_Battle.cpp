/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-19 20:49:54
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ok = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' and s[i + 1] == '1')
        {
            ok = true;
            break;
        }
    }
    if (s[0] == '1')
    {
        ok = true;
    }
    if (s[n - 1] == '1')
    {
        ok = true;
    }
    if (ok)
        yes;
    else
        no;
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