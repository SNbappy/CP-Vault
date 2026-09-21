/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-21 20:19:05
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
bool vis[N];

void Depressed_C0der()
{
    int n;
    cin >> n;
    queue<int> q;
    vector<int> d(n + 1, inf);
    for (int i = 0; i < n; i++) {
        int u, x;
        cin >> u >> x;
        while(x--) {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }

    q.push(1);
    d[1] = 0;
    
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v: g[u]) {
            if (d[u] + 1 < d[v]) {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << (d[i] == inf ? -1 : d[i]) << "\n";
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