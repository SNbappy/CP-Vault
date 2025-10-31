/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-30 23:03:16
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
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '#' and ((a[i][j - 2] == '#' and a[i][j + 2] == '#' and a[i][j] == '#') || (a[i][j - 2] == '#' and j + 2 > n - 1)) || (a[i][j + 2] == '#' and j - 2 < 0))
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 2; i < n; i++)
        {
            if (a[i][j] == '#' and ((a[i - 2][j] == '#' and a[i+2][j] == '#' and a[i][j] == '#') || (a[i - 2][j] == '#' and i + 2 > n - 1)) || (a[i+2][j] == '#' and i - 2 < 0))
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
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