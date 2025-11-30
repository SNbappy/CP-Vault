/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-30 19:26:02
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define debug(...)
#endif

vector<vector<int>> adj;
vector<int> a;
int n, m, ans;

void dfs(int node, int parent, int consec)
{
    if (a[node] == 1)
        consec++;
    else
        consec = 0;

    if (consec > m)
        return;

    bool isLeaf = true;
    for (int nxt : adj[node])
    {
        if (nxt != parent)
        {
            isLeaf = false;
            dfs(nxt, node, consec);
        }
    }

    if (isLeaf)
        ans++;
}

void Solve()
{
    cin >> n >> m;

    a.resize(n);
    adj.assign(n, {});
    ans = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0, -1, 0);

    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++) {
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}