/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-04 21:06:17
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
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<int> p(n);
    bool ok = true;
    int beg = 0;
    while (beg < n)
    {
        int end = beg;
        while (end + 1 < n && s[end + 1] == s[end])
        {
            end += 1;
        }
        if (beg == end)
        {
            ok = false;
            break;
        }
        p[beg] = end;
        for (int i = beg + 1; i <= end; i++)
        {
            p[i] = i - 1;
        }
        beg = end + 1;
    }
    if (!ok)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] + 1 << " \n"[i == n - 1];
    }
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
