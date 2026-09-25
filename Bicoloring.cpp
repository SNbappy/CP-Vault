/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-22 15:07:13
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

const int N = 205;
vector<int> g[N];
int col[N];
bool isBicolor;

void dfs(int u, int c)
{
    col[u] = c;
    for (auto v : g[u])
    {
        if (col[v] == 0)
        {
            dfs(v, (c == 1 ? 2 : 1));
        }
        else if (col[v] == col[u])
        {
            isBicolor = false;
        }
    }
}

void Depressed_C0der()
{
    int n;
    while (cin >> n and n)
    {
        int m;
        cin >> m;
        while (m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        for (int i = 0; i < n; i++)
        {
            col[i] = 0;
        }
        isBicolor = true;
        dfs(1, 1);
        if (isBicolor)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";

        for (int i = 0; i < n; i++)
            g[i].clear();
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}