/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-29 10:57:07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve()
{
    int n, m;
    cin >> n >> m;

    if (m <= n)
    {
        cout << n - m << '\n';
        return;
    }

    const int mx = 2 * m + 5;

    vector<int> dist(mx, -1);
    queue<int> q;

    q.push(n);
    dist[n] = 0;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == m)
        {
            cout << dist[x] << '\n';
            return;
        }
        int nxt = x * 2;
        if (nxt < mx and dist[nxt] == -1){
            dist[nxt] = dist[x] + 1;
            q.push(nxt);
        }
        int nxt1 = x - 1;
        if(nxt1 > 0 and dist[nxt1] == -1){
            dist[nxt1] = dist[x] + 1;
            q.push(nxt1);
        }
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}