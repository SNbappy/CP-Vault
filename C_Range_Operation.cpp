/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-18 23:10:36
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
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> pref(n+1);
    pref[0] = 0;
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = a[i] + pref[i - 1];
    }
    int ans = 0;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        mx = max(mx, -i * i + i + pref[i - 1]);
        ans = max(ans, i * i + i - pref[i] + mx);
    }
    cout << pref[n] + ans << '\n';
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