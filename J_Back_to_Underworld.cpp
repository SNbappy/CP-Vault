#include <bits/stdc++.h>
using namespace std;

const int MAX = 20005;

vector<int> graph[MAX];
bool visited[MAX];
int color[MAX];

int bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    color[src] = 0;

    int count[2] = {1, 0}; // color 0 and color 1

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : graph[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                color[v] = 1 - color[u];
                count[color[v]]++;
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                // Not bipartite — shouldn't happen by problem statement
            }
        }
    }

    return max(count[0], count[1]);
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; ++tc)
    {
        int n;
        scanf("%d", &n);

        // Clear previous test case data
        for (int i = 0; i < MAX; ++i)
        {
            graph[i].clear();
            visited[i] = false;
        }

        set<int> nodes; // Keep track of involved nodes

        for (int i = 0; i < n; ++i)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }

        int answer = 0;

        for (int node : nodes)
        {
            if (!visited[node])
            {
                answer += bfs(node);
            }
        }

        printf("Case %d: %d\n", tc, answer);
    }

    return 0;
}
