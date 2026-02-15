/// https://www.youtube.com/watch?v=9_ftWKch6vI
#include<bits/stdc++.h>
using namespace std;
void dfs(int from, vector<bool> &vis, list<int> *adj) {
    vis[from] = 1;
    // What can do?
    for (int to : adj[from]) {
        // What can do?
        if (!vis[to]) {
            // What can do?
            dfs(to, vis, adj);
            // What can do?
        }
        // What can do?
    }
    // what can do?

    return; // if it will have any return type, then what can do?
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
            dfs(src, vis, adj);
        }
    }
    return 0;
}
