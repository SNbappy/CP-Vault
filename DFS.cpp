#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];

void dfs(int node)
{
    visited[node] = true;
    cout << node << " ";
    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
            dfs(neighbour);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
}