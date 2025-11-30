/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-30 21:44:55
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve()
{
    int m, s;
    cin >> m >> s;

    if (m == 1 and s == 0)
    {
        cout << "0 0" << endl;
        return;
    }

    if (s == 0 || 9 * m < s)
    {
        cout << -1 << " " << -1 << '\n';
        return;
    }

    int ss = s - 1;
    vector<int> v(m, 0);
    v[0] = 1;

    for (int i = m - 1; i > 0; i--)
    {
        if (ss >= 9)
        {
            v[i] = 9;
            ss -= 9;
        }
        else
        {
            v[i] = ss;
            ss = 0;
            break;
        }
    }

    v[0] += ss;

    for (auto x : v)
        cout << x;
    cout << ' ';

    fill(rall(v), 0);
    for (int i = 0; i < m and s; i++) {
        if (s >= 9) {
            v[i] = 9;
            s -= 9;
        } else {
            v[i] = s;
            s -= s;
        }
    }

    for (int i: v) {
        cout << i;
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    // if (freopen("in.txt", "r", stdin) == nullptr)
    // {
    //     perror("Error opening in.txt for reading");
    //     return EXIT_FAILURE;
    // }
    for (int i = 1; i <= tc; i++)
    {
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}