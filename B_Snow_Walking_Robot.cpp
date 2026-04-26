/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-26 09:05:46
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define sz(x) (int)x.size()
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define vpii vector<pair<int, int>>
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Depressed_C0der()
{
    string s;
    cin >> s;
    int cntL = 0, cntR = 0, cntD = 0, cntU = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            cntL++;
        else if (s[i] == 'R')
            cntR++;
        else if (s[i] == 'U')
            cntU++;
        else
            cntD++;
    }
    int x = min(cntL, cntR);
    int y = min(cntD, cntU);

    if (x == 0 and y)
    {
        cout << 2 << "\n";
        cout << "UD" << "\n";
        return;
    }

    if (y == 0 and x)
    {
        cout << 2 << "\n";
        cout << "LR" << "\n";
        return;
    }

    cout << 2 * (x + y) << "\n";

    for (int i = 0; i < x; i++)
    {
        cout << 'L';
    }

    for (int i = 0; i < y; i++)
    {
        cout << 'U';
    }

    for (int i = 0; i < x; i++)
    {
        cout << 'R';
    }

    for (int i = 0; i < y; i++)
    {
        cout << 'D';
    }

    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}