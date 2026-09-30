/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-30 20:05:44
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

const int N = 1005;
vector<int> g[N];
bool vis[N];

set<int> s;
int a[N];

int amount, people;

void dfs(int u)
{
    vis[u] = true;
    amount += a[u];
    people++;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

void Depressed_C0der()
{
    bool ok = true;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int u = 1; u <= n; u++)
    {
        if (!vis[u])
        {
            amount = 0;
            people = 0;
            dfs(u);
            // cout << u << "\n";
            // cout << amount << " " << people << "\n";
            if (amount % people)
            {
                ok = false;
            }
            amount /= people;
            s.insert(amount);
        }
    }

    if (s.size() == 1 and ok)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";

    s.clear();

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
        vis[i] = false;
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
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}