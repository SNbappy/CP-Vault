/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-09-23 14:28:08
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
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << '\n';
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << n / 2 << '\n';
        cout << 3 << " ";
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }
    }
    cout << '\n';
    return 0;
}