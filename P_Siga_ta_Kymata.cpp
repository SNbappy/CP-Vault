/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-17 10:16:11
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define sz(x) (int)x.size()
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define vpii vector<pair<int, int>>
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Depressed_C0der()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string x;
    cin >> x;
    map<int, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            mp[a[i]]++;
            mp[a[i + 1]]++;
        }
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n - 1; i++)
    {
        if (x[i] == '1')
        {
            if (a[i] < a[i + 1])
                v.emplace_back(i + 1, i + 2);
            else if (i != 0 and a[i] > a[i - 1])
                v.emplace_back(i, i + 1);
            else if (i != 0 and a[i] > a[i + 1] and a[i] < a[i - 1])
                v.emplace_back(i, i + 2-);
                x[i] = '0';
        }
    }
    for (auto y : x)
        cout << y;
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '1')
        {
            cout << -1 << '\n';
            return;
        }
    }

    cout << v.size() << '\n';
    for (auto [x, y] : v)
    {
        cout << x << ' ' << y << '\n';
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
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}