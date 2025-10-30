#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
vector<pair<bool, int>> vis(N);

void dfs(int u, int c){
    vis[u].first = true;
    vis[u].second = c;
    for(auto v: g[u]){
        if(!vis[v].first)
            dfs(v, c);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int c = 0;
    for (int i = 1; i <= n; i++){
        if(!vis[i].first){
            c++;
            dfs(i, c);
        }
    }
    int q;
    cin >> q;
    while (q--){
        int x, y;
        cin >> x >> y;
        if(vis[x].second == vis[y].second){
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}