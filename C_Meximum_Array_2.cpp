/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-23 16:15:24
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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n + 1);
    for (int i = 0; i < q; i++)
    {
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 1)
        {
            for (int i = l; i <= r; i++)
            {
                a[i] = k;
            }
        }
        else
        {
            int cnt = k - 1;
            for (int i = l; i <= r; i++)
            {
                a[i] = cnt;
                if (cnt > 0)
                    cnt--;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
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