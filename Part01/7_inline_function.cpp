#include<bits/stdc++.h>
using namespace std;

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
    /// auto dfs = [&](self, int from) {self(self, to);};
    function<void(int)> dfs = [&](int from) -> void {
        vis[from] = true;
        cout << from << " ";
        for (int to : adj[from]) {
            if (!vis[to]) {
                dfs(to);
            }
        }
    };

    for (int src = 1; src <= node; src) {
        if (vis[src] == false) {
            dfs(src);
        }
    }
    return 0;
}

/**
    1. Shortest Distance/ Level
    2. Parent of each Node
    3. Component Counting
    4. cycle(bfs-dfs try)
    5. Cycle count
    6. cycle print
    7.
*/
