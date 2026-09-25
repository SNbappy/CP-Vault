/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-25 22:49:54
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

const int N = 1e5 + 9;
vector<int> g[N];
int col[N];

void dfs(int u, int c)
{
    col[u] = c;
    for (auto v: g[u]) {
        if (col[v] == 0) {
            dfs(v, (c == 1 ? 2 : 1));
        }
    }
}

void Depressed_C0der()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        col[i] = 0;

    dfs(1, 1);

    int red = 0, blue = 0;

    for (int i = 1; i <= n; i++) {
        if (col[i] == 1)
            red++;
        else
            blue++;
    }

    cout << red * blue - (n - 1) << "\n";
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