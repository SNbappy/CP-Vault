/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-22 12:24:46
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

const int N = 2e5 + 9, inf = 1e9;
vector<int> g[N];
int a[N], ans[N], n;

void solve(vector<int> even, vector<int> odd) {
    queue<int> q;
    vector<int> d(n + 1, inf);
    for (auto st : even)
    {
        q.push(st);
        d[st] = 0;
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (d[u] + 1 < d[v])
            {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    for (auto u : odd)
    {
        ans[u] = d[u];
    }
}
\
void Depressed_C0der()
{
    cin >> n;
    vector<int> even, odd;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 1)
        {
            odd.push_back(i);
        }
        else
        {
            even.push_back(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int j = i - a[i];
        if (j >= 1)
            g[j].push_back(i);
        j = i + a[i];
        if (j <= n)
            g[j].push_back(i);
    }

    for (int i = 1; i <= n; i++) {
        ans[i] = inf;
    }

    solve(even, odd);
    solve(odd, even);

    for (int i = 1; i <= n; i++) {
        if (ans[i] == inf)
            ans[i] = -1;
        cout << ans[i] << ' ';
    }
    cout << '\n';
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