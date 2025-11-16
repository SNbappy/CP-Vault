/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-16 21:25:15
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
    deque<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cost = 0;

    int i = 0, j = 1, l = n - 1;
    while (a.size() >= 2)
    {
        int x;
        if (a[1] < a[a.size() - 1])
        {
            x = max(a[0], a[1]);
            cost += x;
            a.pop_front();
            a[0] = x;
        }
        else
        {
            x = max(a[0], a[a.size() - 1]);
            cost += x;
            a.pop_back();
            a[0] = x;
        }
        cerr << x << '\n';
    }
    cout << cost << '\n';
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