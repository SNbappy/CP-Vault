/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-30 11:32:56
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
bool vis[N];
bool found;
int par[N];
vector<int> cycle, g[N];

void dfs(int u, int p) {
    if (found)
        return;
    vis[u] = true;
    par[u] = p;
    for (auto v : g[u]) {
        if (!vis[v]) {
            dfs(v, u);
        }
        else if (v != p) {
            found = true;
            while (u != v) {
                cycle.push_back(u);
                u = par[u];
            }
            cycle.push_back(v);
            cycle.push_back(u);
            return;
        }
    }
}

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, 0);
            if (found) {
                cout << cycle.size() << '\n';
                for (auto u: cycle) {
                    cout << u << ' ';
                }
                cout << '\n';
                return;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
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