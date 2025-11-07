/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-07 11:51:45
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
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> X;
    vector<pair<int, int>> Y;
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
        if (c[i] == 0)
        {
            X.push_back(b[i]);
        }
        else
        {
            Y.push_back({b[i], c[i]});
        }
    }
    multiset<int> S;
    for (int i = 0; i < n; i++)
    {
        S.insert(a[i]);
    }
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    int i = 0, j = 0;

    int ans = 0;

    while (!S.empty() && (i < X.size() || j < Y.size()))
    {
        auto f = S.begin();
        int x = *f;
        S.erase(f);

        if (j < Y.size() && Y[j].first <= x)
        {
            x = max(x, Y[j].second);
            j++;
            S.insert(x);
            ans++;
            continue;
        }

        if (i < X.size() && X[i] <= x)
        {
            i++;
            ans++;
            continue;
        }
    }

    cout << ans << '\n';
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