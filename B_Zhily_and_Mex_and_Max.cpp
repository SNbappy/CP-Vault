/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-06 12:16:03
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
    for (auto &x : a)
    {
        cin >> x;
    }

    int mex = 0, mx = 0;
    int ans = 0;

    sort(all(a));
    multiset<int> ms;
    for (int i = 0; i <= n; i++)
        ms.insert(i);
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        if (ms.count(a[i]))
        {
            ms.erase(a[i]);
        }
        ans += mx + *ms.begin();
    }

    ms.clear();
    for (int i = 0; i <= n; i++)
        ms.insert(i);
    int as = 0;
    mx = 0, mex = 0;

    sort(rall(a));

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        if (ms.count(a[i])){
            ms.erase(a[i]);
        }
        as += mx + *ms.begin();
        // cout << *ms.begin() << "\n";
    }

    cout << max(ans, as) << "\n";
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