/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-08 11:17:21
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
    int l, r;
    cin >> l >> r;
    --l, --r;
    int c = 1, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == r)
            cout << x << ' ';
        else
        {
            int a = c, b = 1;
            while (a % 2 == 0)
                b *= 2, a /= 2;
            if (i == r + 1)
                cout << (b ^ x) << ' ';
            else
                cout << b << ' ';
            if (i >= l && i <= r)
                x = (x ^ b);
            c++;
        }
    }
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