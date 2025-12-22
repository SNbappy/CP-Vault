/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-21 10:03:45
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
    vector<int> a(n), d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a.push_back(1e15);
    for (int i = 0; i < n; i++)
    {
        d[i] = a[i + 1] - a[i];
    }
    int low = 0, high = d[0];
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        int nl = d[i - 1] - high;
        int nh = d[i - 1] - low;
        nh = min(nh, d[i]);
        if(nl >= d[i])
            nl = 0;
        else
            ans++;
        low = nl;
        high = nh;
    }
    cout << ans << "\n";
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