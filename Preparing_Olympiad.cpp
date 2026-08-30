/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-08-30 08:49:45
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        int cnt = 0;
        int mx = LLONG_MIN;
        int mn = LLONG_MAX;
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)){
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
                ++cnt;
                sum += a[j];
            }
        }
        if (cnt >= 2 and mx - mn >= x and sum >= l and sum <= r)
        {
            ++ans;
        }
    }
    cout << ans << "\n";
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
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}