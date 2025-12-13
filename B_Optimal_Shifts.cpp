/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-13 10:18:42
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
    string a;
    cin >> a;
    int cnt = 0;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    cnt = 0;
    if (a[0] == '0')
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                cnt++;
            else
                break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '0')
                cnt++;
            else
                break;
        }
        mx = max(mx, cnt);
    }
    cout << mx << '\n';
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