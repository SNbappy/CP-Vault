/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-01 00:46:49
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
    char s[n][n];
    multiset<int> sum, diff, x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == '#')
            {
                sum.insert(i + j);
                diff.insert(i - j);
                x.insert(i);
                y.insert(j);
            }
        }
    }
    if (x.size() < 2)
    {
        cout << "YES" << '\n';
        return;
    }
    bool ok = false;
    ok |= *(--sum.end()) - *sum.begin() <= 1;
    ok |= *(--diff.end()) - *diff.begin() <= 1;
    ok |= (*(--x.end()) - *x.begin() <= 1) && (*(--y.end()) - *y.begin() <= 1);
    if (ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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