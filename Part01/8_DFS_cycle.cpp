#include<bits/stdc++.h>
using namespace std;
bool dfs(int from, int par, vector<bool> &vis, list<int> *adj) {
    vis[from] = 1;
    int isCycle = 0;
    for (int to : adj[from]) {
        if (!vis[to]) {
            isCycle |= dfs(to, vis, adj);
        } else if (vis[to] == 1 and par != to) {
            return 1;
        }
    }
    return isCycle;
}
int32_t main() {
    int node, edges;
    cin >> node >> edges;

    list<int> adj[node + 1];
    for (int i = 0; i < edges; i++) {
        int from, to;
        cin >> from >> to;

        adj[from].push_back(to);
        adj[to].push_back(from);
    }

    vector<bool> vis(node + 1, false);
    for (int src = 1; src <= node; src) {
        if (vis[src] == false) {
            dfs(src, 0, vis, adj);
        }
    }
    return 0;
}
