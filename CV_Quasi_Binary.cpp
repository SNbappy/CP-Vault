/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-17 21:28:47
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

    int n = s.size();

    vi a(n);

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        a[i] = s[i] - '0';
        mx = max(mx, a[i]);
    }

    cout << mx << "\n";

    vector<string> ans;

    for (int t = 0; t < mx; ++t)
    {
        string cur;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] > 0)
            {
                cur.push_back('1');
                --a[i];
            }
            else
            {
                cur.push_back('0');
            }
        }
        int pos = cur.find_first_not_of('0');
        if (pos == string::npos)
            cur = "0";
        else
            cur = cur.substr(pos);
        ans.push_back(cur);
    }

    for (int i = 0; i < (int)ans.size(); ++i)
    {
        if (i)
            cout << ' ';
        cout << ans[i];
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}