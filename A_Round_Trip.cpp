/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-30 22:35:25
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
    int r, x, d, n;
    string s;
    cin >> r >> x >> d >> n >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (r >= x and s[i] == '1')
        {
            cnt++;
            r = r - d;
        }
        else if (r < x)
        {
            cnt++;
            r = r - d;
        }
    }
    cout << cnt << '\n';
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