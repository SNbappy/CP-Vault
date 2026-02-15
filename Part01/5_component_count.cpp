#include<bits/stdc++.h>
using namespace std;
void bfs(int src, vector<bool> &vis, list<int> adj[]) { // without '&' call * O(|vis|)
    queue<int> q;

    q.push(src);
    vis[src] = true;

    while (!q.empty()) { /// while (q.size())
        int from = q.front();
        q.pop();

        cout << from << " ";
        for (int to : adj[from]) {
            if (vis[to] == false) {
                vis[to] = true;
                q.push(to);
            }
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

    int ans = 0;
    vector<bool> vis(node + 1, false);
    for (int src = 1; src <= node; src) {
        if (vis[src] == false) {
            ++ans;
            bfs(src, vis, adj);
        }
    }
    cout << ans << endl;
    return 0;
}

