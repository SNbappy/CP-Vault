/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-22 12:08:15
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

void Depressed_C0der()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    map<int, int> d;
    while (n--)
    {
        int u;
        cin >> u;
        q.push(u);
        d[u] = 0;
    }

    int ans = 0;
    vector<int> v;

    while (!q.empty() and m > 0)
    {
        int u = q.front();
        q.pop();

        if (d.find(u - 1) == d.end() and m > 0)
        {
            v.push_back(u - 1);
            d[u - 1] = d[u] + 1;
            q.push(u - 1);
            ans += d[u - 1];
            --m;
        }
        if (d.find(u + 1) == d.end() and m > 0)
        {
            v.push_back(u + 1);
            d[u + 1] = d[u] + 1;
            q.push(u + 1);
            ans += d[u + 1];
            --m;
        }
    }

    cout << ans << "\n";
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
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