/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-23 13:25:26
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> even(n, 0), odd(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even[i]++;
        else
            odd[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        char c;
        int x, y;
        cin >> c >> x >> y;
        if (c == 'R')
        {
            x--;
            if ((a[x] % 2 == 0 and (a[x] + y) % 2 == 1))
            {
                even[x]--;
                odd[x]++;
            }
            if ((a[x] % 2 == 1 and (a[x] + y) % 2 == 0))
            {
                even[x]++;
                odd[x]--;
            }
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