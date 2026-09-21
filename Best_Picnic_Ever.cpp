/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-22 00:40:41
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

const int N = 1005;
vector<int> g[N], cnt(N);
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    ++cnt[u];
    for (auto v: g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

void Depressed_C0der()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> person(k);
    for (int i = 0; i < k; i++) {
        cin >> person[i];
    }
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    for (int i = 0; i < k; i++) {
        for (int i = 1; i <= n; i++) {
            vis[i] = false;
        }
            dfs(person[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        // cout << cnt[i] << "\n";
        if (cnt[i] == k)
            ++ans;
    }
    cout << ans << "\n";

    for (int i = 1; i <= n; i++) {
        cnt[i] = 0;
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
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}