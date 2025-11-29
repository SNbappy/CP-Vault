/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-28 20:40:14
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
    if (n == 2)
    {
        cout << 9 << '\n';
        return;
    }
    int x = max(n * n, 0LL);
    int y = max(n * n - 1, 0LL);
    int z = max(n * n - 2, 0LL);
    int a = max(n * n - n - 1, 0LL);
    int xx = x + y + z + a;
    int yy = max(n * n - n - 1, 0LL) + max(n * n - n, 0LL) + max(n * n - n - 2, 0LL) + max(n * n - 1, 0LL) + max(n * n - 2 * n - 1, 0LL);
    // cout << max(n * n - n - 1, 0LL) << " " << max(n * n - n, 0LL) << " " << max(n * n - n - 2, 0LL) << " " << max(n * n - 1, 0LL)  << " " << max(n * n - 2*n - 1, 0LL) << '\n';
    cout << max(xx, yy) << '\n';
    // cout << n * n - 1 << '\n';
    // cout << xx << '\n';
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