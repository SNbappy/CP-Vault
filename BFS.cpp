#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];
int disTo[N];

void bfs(int start){
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v: adj[u]){
            
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
}