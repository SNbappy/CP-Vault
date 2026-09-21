/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-21 21:59:48
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

const int inf = 1e9;

void Depressed_C0der()
{
    int edges;
    while(cin >> edges and edges) {
        map<int, vector<int>> g;
        set<int> nodes;
        while(edges--) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }

        int start, ttl;
        while(cin >> start >> ttl and !(start == 0 and ttl == 0)) {
            map<int, int> d;
            for (auto u: nodes) {
                d[u] = inf;
            }
            queue<int> q;
            q.push(start);
            d[start] = 0;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (auto v : g[u]) {
                    if (d[u] + 1 < d[v]) {
                        d[v] = d[u] + 1;
                        q.push(v);
                    }
                }
            }
            int not_reachable = 0;
            for (auto u : nodes)
            {
                if (d[u] > ttl)
                {
                    not_reachable++;
                }
            }
            cout << not_reachable << "\n";
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