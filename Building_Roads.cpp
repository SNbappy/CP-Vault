/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-30 19:28:12
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
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    for (int v: g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    while(m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = -1;
    vector<int> count;
    for (int u = 1; u <= n; u++) {
        if(!vis[u]) {
            cnt++;
            count.push_back(u);
            dfs(u);
        }
    }

    cout << cnt << "\n";

    for (int i = 0; i < count.size() - 1; i++) {
        cout << count[i] << " " << count[i + 1] << "\n";
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