/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-21 20:33:00
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

const int N = 2e5 + 9, inf = 1e9;
vector<int> g[N];
bool vis[N];
int d[N], par[N];

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    q.push(1);
    d[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        d[i] = inf;
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (d[u] + 1 < d[v])
            {
                d[v] = d[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }

    if (d[n] == inf)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    cout << d[n] + 1 << "\n";

    vector<int> path;

    int u = n;

    while (u != 1)
    {
        path.push_back(u);
        u = par[u];
    }

    path.push_back(1);

    reverse(all(path));
    for (auto x : path)
        cout << x << " ";
    cout << "\n";
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