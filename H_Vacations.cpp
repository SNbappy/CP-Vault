/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-01 12:11:58
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

const int maxn = 1e2 + 14;

void Solve()
{
    int n;
    cin >> n;
    int dp[n + 1][3];
    memset(dp, 63, sizeof(dp));

    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        dp[i + 1][0] = min({dp[i][0], dp[i][1], dp[i][2]}) + 1;

        if(x == 1 || x == 3){
            dp[i + 1][1] = min(dp[i][0], dp[i][2]);
        }

        if(x == 2 || x == 3){
            dp[i + 1][2] = min(dp[i][0], dp[i][1]);
        }
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << "\n";
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}