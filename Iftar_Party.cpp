/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-01 02:11:42
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

void Depressed_C0der()
{
    int p, l;
    cin >> p >> l;
    int now = p - l;
    vector<int> div;
    for (int i = 1; i * i <= now; i++)
    {
        if (now % i == 0)
        {
            if (i > l)
                div.push_back(i);
            if (i * i != now and now / i > l)
                div.push_back(now / i);
        }
    }

    sort(all(div));

    if (div.empty())
    {
        cout << "impossible\n";
    }
    else
    {
        for (auto x : div)
            cout << x << " ";
        cout << "\n";
    }
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
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}