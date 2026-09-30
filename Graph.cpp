/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-30 15:19:25
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
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
    vector<vector<int>> g(n, vector<int>(n));
    // int g[n][n];

    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < n; j++)
    //         g[i][j] = 0;

    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u >> k;
        --u;
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            --v;
            g[u][v] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << g[i][j] << (n - 1 != j ? " " : "");
        cout << "\n";
    }
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