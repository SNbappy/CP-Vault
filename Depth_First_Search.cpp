/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-30 15:56:29
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
bool vis[N];
vector<int> g[N];

int discover_time[N], finish_time[N], current_time = 0;

void dfs(int u)
{
    vis[u] = true;
    discover_time[u] = ++current_time;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
    finish_time[u] = ++current_time;
}

void Depressed_C0der()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int i = 1; i <= k; i++)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    for (int u = 1; u <= n; u++)
    {
        cout << u << " " << discover_time[u] << " " << finish_time[u] << "\n";
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