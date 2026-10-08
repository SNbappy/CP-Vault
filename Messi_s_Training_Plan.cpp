/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-07 09:52:37
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
vector<bool> vis;
vector<int> g[N];
vector<int> mn, mx;

int dfs(int u, int dis) {
    vis[u] = true;
    mn[u] = dis;

    int cnt = 0;

    for(auto v: g[u]) {
        if (!vis[v]) {
            cnt += 1 + dfs(v, dis + 1);
        }
    }

    return mx[u] = cnt;
}

void Depressed_C0der()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vis.assign(n + 1, false);
    mn.assign(n + 1, 0);
    mx.assign(n + 1, 0);

    dfs(1, 1);

    for (int i = 1; i <= n; i++) {
        cout << mn[i] << " " << max(0LL, n - mx[i]) << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
    }
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