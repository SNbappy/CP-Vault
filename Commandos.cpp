/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-21 23:56:37
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

const int N = 105, inf = 1e9;
vector<int> g[N];

int n;

vector<int> bfs(int s)
{
    vector<int> d(n, inf);
    queue<int> q;
    q.push(s);
    d[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (d[u] + 1 < d[v])
            {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    return d;
}

void Depressed_C0der()
{
    int m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int s, e;
    cin >> s >> e;
    auto ds = bfs(s);
    auto de = bfs(e);

    int ans = 0;
    for (int u = 0; u < n; u++)
    {
        ans = max(ans, ds[u] + de[u]);
    }
    cout << ans << "\n";

    for (int i = 0; i < n; i++)
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
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}