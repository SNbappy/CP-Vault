/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-28 21:01:59
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
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    // if(a[n - 1] == 0){
    //     cout << 0 << '\n';
    //     return;
    // }
    int mn, mx;
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            id = i;
            mn = a[i];
            break;
        }
    }
    // mx = a[n - 1];
    // cout << min(mx, n - id) << '\n';
    int x, y;
    if (sum >= 2 * n - 1)
    {
        // cout << n << '\n';
        x = n;
    }
    else
    {
        // cout << 2 * n - 1 - sum << '\n';
        x = sum - n + 1;
    }
    cout << min(x, n - id) << '\n';
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