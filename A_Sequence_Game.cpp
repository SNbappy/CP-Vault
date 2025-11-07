/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-07 10:57:20
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool ok = false;
    bool ok1 = false;
    if (n == 1)
    {
        if (a[0] == x)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "YES" << '\n';
            return;
        }
        if (!ok and a[i] < x)
        {
            ok = true;
            continue;
        }
        if (!ok1 and a[i] > x)
        {
            ok1 = true;
            continue;
        }
        
    }
    if (ok and ok1)
    {
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';
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