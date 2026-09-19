/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-01-24 12:31:04
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define sz(x) (int)x.size()
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define vpii vector<pair<int, int>>
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
int discovery_time[N], finish_time[N], current_time;

void dfs(int u)
{
    vis[u] = true;
    current_time++;
    discovery_time[u] = current_time;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
    current_time++;
    finish_time[u] = current_time;
}

void Depressed_C0der()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, adjacent_node_count;
        cin >> u >> adjacent_node_count;
        while (adjacent_node_count--)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
        sort(all(g[u]));
    }
    current_time = 0;
    for (int u = 1; u <= n; u++)
    {
        if (!vis[u])
            dfs(u);
    }

    for (int u = 1; u <= n; u++)
    {
        cout << u << ' ' << discovery_time[u] << ' ' << finish_time[u] << "\n";
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