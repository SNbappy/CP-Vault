/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-30 23:15:52
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        // cout << a[i] << " " << b[i] << '\n';
        i++;
        if (i < n)
            b[i] = a[n - i - 1];
    }

    // int ber = 0;
    // int sum = 0, ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += a[i];
    //     int k = sum / x;
    //     if (k > ber)
    //     {
    //         ber = k;
    //         ans += a[i];
    //     }
    // }
    // cout << ans << '\n';
    // for (auto x : a)
    // {
    //     cout << x << " ";
    // }
    // cout << '\n';
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