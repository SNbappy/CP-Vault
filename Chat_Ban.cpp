/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-08-14 08:17:08
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
    int k, x;
    cin >> k >> x;
    int lo = 1;
    int hi = k;
    int ans = 2 * k - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int sum = mid * (mid + 1) / 2;

        if (sum >= x)
        {
            ans = min(ans, mid);
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }

    lo = 1, hi = k - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int firstHalf = k * (k + 1) / 2;
        int extra = mid * (2 * k - mid - 1) / 2;
        if (firstHalf + extra >= x)
        {
            ans = min(ans, k + mid);
            hi = mid - 1;
        }
        else
            lo = mid + 1;
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