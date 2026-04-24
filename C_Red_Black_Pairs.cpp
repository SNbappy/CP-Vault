/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-23 11:06:43
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
    string a, b;
    cin >> a >> b;
    vector<int> dp(n, LLONG_MAX);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            dp[i] = 0;
        else
            dp[i] = 1;
        if (i)
            dp[i] += dp[i - 1];
        if (i)
        {
            int x = 0;
            if (a[i] != a[i - 1])
                x++;
            if (b[i] != b[i - 1])
                x++;
            dp[i] = min(dp[i], x + (i >= 2 ? dp[i - 2] : 0));
        }
    }
    cout << dp[n - 1] << "\n";
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