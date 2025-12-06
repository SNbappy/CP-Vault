/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-05 16:13:52
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
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    map<int, int> mp;
    vector<int> v;
    for (auto x : s)
    {
        if (mp[x] == 0)
        {
            int xx = x;
            v.push_back(xx);
            int cnt = 1;
            int cur = xx;
            while (cur <= k)
            {
                if (s.find(cur) != s.end())
                {
                    mp[cur]++;
                }
                else
                {
                    cout << -1 << '\n';
                    return;
                }
                cnt++;
                cur = xx * cnt;
            }
        }
    }
    cout << v.size() << '\n';
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
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