/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-06 19:30:45
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
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
        
    }
    if (n == 1)
    {
        cout << 0 << '\n';
        return;
    }
    int ans = 0;
    for (int j = 0; j < (n + 1) / 2; j++)
    {
        for (int k = 0; k < n / 2; k++)
        {
            int s = a[j][k] + a[k][n - 1 - j] + a[n - 1 - j][n - 1 - k] + a[n - 1 - k][j];
            ans += min(s, 4 - s);
        }
    }
    cout << ans << '\n';
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