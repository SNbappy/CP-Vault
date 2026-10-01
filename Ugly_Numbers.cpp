/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-01 01:01:58
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

const int MAX = 1e18;

void Depressed_C0der()
{
    int p2 = 1;
    vector<int> num;
    while (p2 <= MAX)
    {
        int p3 = 1;
        while (p2 * p3 <= MAX)
        {
            int p5 = 1;
            while (p2 * p3 * p5 <= MAX)
            {
                num.push_back(p2 * p3 * p5);
                p5 *= 5;
            }
            p3 *= 3;
        }
        p2 *= 2;
    }
    sort(all(num));
    cout << "The 1500'th ugly number is " << num[1500 - 1] << "." << "\n";
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
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}