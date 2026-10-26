/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-24 06:07:25
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
int col[N], par[N];
bool found;
vector<int> cycle;

void dfs(int u) {
    if (found)
        return;
    col[u] = 1;
    for (auto v: g[u]) {
        if (found)
            return;
        if (col[v] == 0) {
            par[v] = u;
            dfs(v);
        }
        else if (col[v] == 1) {
            found = true;
            int st = u;
            while (u != v) {
                cycle.push_back(u);
                u = par[u];
            }
            cycle.push_back(v);
            cycle.push_back(st);
            reverse(all(cycle));
            return;
        }
    }
    col[u] = 2;
}

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) {
        if (!col[i])
            dfs(i);
        if (found) {
            cout << cycle.size() << '\n';
            for (auto u : cycle) {
                cout << u << " ";
            }
            cout << "\n";
            return;
        }
    }

    cout << "IMPOSSIBLE" << "\n";
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