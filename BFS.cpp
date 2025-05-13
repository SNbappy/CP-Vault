#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];
int disTo[N];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    disTo[start] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v: adj[u]){
            if(!visited[v]){
                visited[v] = true;
                disTo[v] = disTo[u] + 1;
                q.push(v);
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            cout << "dist[1→" << i << "] = " << disTo[i] << "\n";
        else
            cout << i << " is not reachable from 1\n";
    }
}