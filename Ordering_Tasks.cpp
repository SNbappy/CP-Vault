/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-26 06:11:18
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

const int N = 105;
vector<int> g[N];
bool vis[N];
vector<int> dfs_end_time_ord;

void dfs(int u) {
    vis[u] = true;
    for (auto v: g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
    dfs_end_time_ord.push_back(u);
}

void Depressed_C0der()
{
    int n, m;
    while (cin >> n >> m and !(n == 0 and m == 0)) {
        while (m--) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
        }

        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                dfs(i);
            }
        }

        reverse(all(dfs_end_time_ord));

        for (auto x: dfs_end_time_ord) {
            cout << x << ' ';
        }
        cout << "\n";

        dfs_end_time_ord.clear();

        for (int i = 1; i <= n; i++) {
            g[i].clear();
            vis[i] = false;
        }
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