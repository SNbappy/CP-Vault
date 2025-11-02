/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-02 19:57:37
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
    int n;
    cin >> n;
    vector<int> a[n + 1], ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i);
    }
    int cur = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = a[i].size();
        if (cnt % i != 0)
        {
            cout << -1 << '\n';
            return;
        }
        for (int j = 0; j < cnt; j++)
        {
            if (j % i == 0)
                cur++;
            ans[a[i][j]] = cur;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}