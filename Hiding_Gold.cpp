#include <bits/stdc++.h>

using namespace std;

/****************************************************************/

#define int long long
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define endl "\n"
const int mod = 998244353;
const int inf = -1;

/****************************************************************/

/*
 * Hopcroft-Karp Bipartite Matching
 * Time: O(E * sqrt(V))
 * Use: Maximum Bipartite Matching, Minimum Vertex Cover
 */
struct HopcroftKarp
{
    int n, m;
    vector<vector<int>> g;
    vector<int> dist, pairU, pairV;
    static const int INF = 1e9;

    HopcroftKarp(int n_ = 0, int m_ = 0)
    {
        n = n_;
        m = m_;
        g.assign(n, {});
        pairU.assign(n, -1);
        pairV.assign(m, -1);
        dist.assign(n, 0);
    }

    void add_edge(int u, int v)
    {
        g[u].push_back(v);
    }

    bool bfs()
    {
        queue<int> q;
        for (int u = 0; u < n; ++u)
        {
            if (pairU[u] == -1)
            {
                dist[u] = 0;
                q.push(u);
            }
            else
            {
                dist[u] = INF;
            }
        }
        bool foundAug = false;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (int v : g[u])
            {
                int u2 = pairV[v];
                if (u2 == -1)
                {
                    foundAug = true;
                }
                else if (dist[u2] == INF)
                {
                    dist[u2] = dist[u] + 1;
                    q.push(u2);
                }
            }
        }
        return foundAug;
    }

    bool dfs(int u)
    {
        for (int v : g[u])
        {
            int u2 = pairV[v];
            if (u2 == -1 || (dist[u2] == dist[u] + 1 && dfs(u2)))
            {
                pairU[u] = v;
                pairV[v] = u;
                return true;
            }
        }
        dist[u] = INF;
        return false;
    }

    int max_matching()
    {
        int matching = 0;
        while (bfs())
        {
            for (int u = 0; u < n; ++u)
                if (pairU[u] == -1 && dfs(u))
                    ++matching;
        }
        return matching;
    }

    vector<pair<int, int>> matching_edges() const
    {
        vector<pair<int, int>> res;
        for (int v = 0; v < m; ++v)
            if (pairV[v] != -1)
                res.emplace_back(pairV[v], v);
        return res;
    }
};

const int dx[] = {1, 0};
const int dy[] = {0, 1};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    vector<vector<int>> num(n, vector<int>(m, inf));
    for(auto &str: grid)
        cin >> str;

    int lcnt = 0, rcnt = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '*'){
                cnt++;
                int node = i + j;
                if(node & 1){
                    num[i][j] = rcnt++;
                }
                else{
                    num[i][j] = lcnt++;
                }
            }
        }
    }
    
    HopcroftKarp hk(lcnt, rcnt);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(num[i][j] == inf)
                continue;

            for (int k = 0; k < 2; k++){
                int ni = i + dx[k], nj = j + dy[k];
                if(ni == n or nj == m or num[ni][nj] == inf)
                    continue;

                int u = num[i][j], v = num[ni][nj];
                if((i + j) % 2 == 0){
                    hk.add_edge(u, v);
                }
                else{
                    hk.add_edge(v, u);
                }
            }
        }
    }

    int match = hk.max_matching();
    cout << match + (cnt - 2 * match) << endl;
}

int32_t main()
{
    // freopen("paint.in", "r", stdin);
    // freopen("paint.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {
        cout<<"Case "<<z<<": ";
        solve();
    }
}