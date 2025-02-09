/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-18 11:04:15

*/

//************************************************************************
//************************************************************************

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

//************************************************************************
//************************************************************************

void Beche_achi()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cur = 1;
        else
            cur++;
        ans = max(ans, cur);
    }
    cout << ans + 1 << endl;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}