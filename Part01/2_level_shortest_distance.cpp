#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+5;
vector<int> level(MAXN);
void bfs(int src, vector<bool> &vis, list<int> adj[]) { // without '&' call * O(|vis|)
    queue<int> q;

    q.push(src);
    level[src] = 0; /// correction
    vis[src] = true;

    while (!q.empty()) { /// while (q.size())
        int from = q.front();
        q.pop();

        cout << from << " ";
        for (int to : adj[from]) {
            if (vis[to] == false) {
                q.push(to);
                vis[to] = true;
                level[to] = level[from] + 1;
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

    vector<bool> vis(node + 1, false);
    for (int src = 1; src <= node; src) {
        if (vis[src] == false) {
            bfs(src, vis, adj);
        }
    }

    for (int i = 1; i <= node; i++) {
        cout << i << " " << level[i] << endl;
    }
    return 0;
}

