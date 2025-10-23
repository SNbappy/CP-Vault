/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-23 10:19:54
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
    double a, b;
    cin >> a >> b;
    double x = abs(((a / 12.0) * 360) - ((b / 60.0) * 360));
    // cout << x << endl;
    // cout << z << endl;
    double pain;
    if (a > b / 12.0)
        pain = x + ((b / (12.0 * 60.0)) * 360);
    else
        pain = x - ((b / (12.0 * 60.0)) * 360);
    pain = min(pain, 360 - pain);
    cout << fixed << setprecision(7) << pain << endl;
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