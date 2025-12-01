/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-01 11:34:23
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), x(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        x[l]++;
        if (r < n - 1)
            x[r + 1]--;
    }
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        v += x[i];
        b[i] = v;
    }
    sort(all(b));
    int res = 0;
    for (int i = 0; i < n; i++)
        res += (b[i] * 1ll * a[i]);
    cout << res << endl;
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