/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-23 12:28:55
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
    int n, l;
    char c;
    cin >> n >> l >> c;
    int x, y, z;
    if (c == 'L')
    {
        z = (n - l);
        int pos = (l - 1) / 2 + 1;
        x = pos;
        y = l - pos + 1;
        cout << pos << " " << pos << " " << z << endl;
    }
    else
    {
        x = (l - 1);
        int pos = (n - l) / 2 + 1;
        y = pos - l + 1;
        z = n - pos + 1;
        cout << x << " " << pos << " " << pos << endl;
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