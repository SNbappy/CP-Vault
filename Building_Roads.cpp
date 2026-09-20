/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-20 03:39:00
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

const int N = 2e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int u)
{
    vis[u] = true;
    for (int v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int new_roads = -1;
    vector<int> vv;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vv.push_back(i);
            ++new_roads;
            dfs(i);
        }
    }
    cout << new_roads << "\n";
    for (int i = 0; i < vv.size() - 1; i++) {
        cout << vv[i] << " " << vv[i + 1] << "\n";
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