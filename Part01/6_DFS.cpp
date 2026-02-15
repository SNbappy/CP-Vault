#include<bits/stdc++.h>
using namespace std;
void dfs(int from, vector<bool> &vis, list<int> *adj) {
    vis[from] = 1;
    cout << from << "-> ";
    for (int to : adj[from]) {
        if (!vis[to]) {
            dfs(to, vis, adj);
        }
    }
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
