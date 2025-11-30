/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-30 18:38:28
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> cnt(n, -1), parent(n);

    cnt[0] = a[0];

    auto dfs = [&](int node, int Mx, int c, auto &self) -> void
    {
        cnt[node] = Mx;
        for (int nbr : adj[node])
        {
            if (cnt[nbr] == -1)
            {
                int cur = c;
                if (a[nbr] == 0)
                    cur = 0;
                else
                    cur += 1;
                self(nbr, max(Mx, cur), cur, self);
            }
        }
    };

    dfs(0, a[0], a[0], dfs);

    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (adj[i].size() == 1)
            ans += (cnt[i] <= m);
    }
    cout << ans << '\n';
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}