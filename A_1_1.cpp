/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-08 20:37:47
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1] and s[i - 1] == '1')
        {
            s[i] = '1';
        }
        if (s[i] == '1')
            cnt++;
    }
    if (s[0] == '1')
        ++cnt;
    if (s[n - 1] == '1')
        cnt++;
    int cc = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1] and s[i - 1] == '1')
        {
            s[i] = '0';
        }
        if (s[i] == '1')
            cc++;
    }
    if (s[0] == '1')
        ++cc;
    if (s[n - 1] == '1')
        cc++;
    cout << cc << " " << cnt << '\n';
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