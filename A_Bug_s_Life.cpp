/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-25 22:25:55
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

const int N = 2005;
vector<int> g[N];
int col[N];
bool is_NotHomo;

void dfs(int u, int c)
{
    col[u] = c;
    for (auto v : g[u])
    {
        if (col[v] == 0)
        {
            dfs(v, (c == 1 ? 2 : 1));
        }
        else
        {
            if (col[u] == col[v])
            {
                is_NotHomo = false;
            }
        }
    }
}

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        col[i] = 0;
    }

    is_NotHomo = true;

    for (int u = 1; u <= n; u++)
    {
        if (col[u] == 0)
        {
            dfs(u, 1);
        }
    }

    if (is_NotHomo)
    {
        cout << "No suspicious bugs found!\n";
    }
    else
    {
        cout << "Suspicious bugs found!\n";
    }

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cout << "Scenario #" << i << ":\n";
        Depressed_C0der();
    }
    return 0;
}