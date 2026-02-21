/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-02-21 21:37:48
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
    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }

    if (cnt1 == 0)
    {
        cout << 0 << "\n";
        return;
    }

    if (cnt0 == 1)
    {
        cout << 1 << "\n";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cout << i + 1 << "\n";
            }
        }
        return;
    }
    if (cnt1 == 2)
    {
        cout << 2 << "\n";
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (!ok and s[i] == '1')
            {
                cout << i + 1 << " ";
                ok = true;
                continue;
            }
            if (ok and s[i] == '1')
            {
                cout << i + 1 << "\n";
            }
        }
        return;
    }

    cout << -1 << "\n";
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