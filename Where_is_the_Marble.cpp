/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-08-14 09:34:27
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
    int cnt = 0;
    while(true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 and q == 0)
            return;

        ++cnt;
        cout << "CASE# " << cnt << ":\n";
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(all(a));

        while (q--)
        {
            int x;
            cin >> x;
            int l = 0, h = n - 1;
            int ans = -1;
            while (l <= h)
            {
                int mid = l + (h - l) / 2;

                if (a[mid] == x)
                {
                    ans = mid + 1;
                    h = mid - 1;
                }
                else if (a[mid] < x)
                    l = mid + 1;
                else
                    h = mid - 1;
            }

            if (ans != -1)
                cout << x << " found at " << ans << "\n";
            else
                cout << x << " not found" << "\n";
        }
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
        // cout << "CASE# " << i << ":\n";
        Depressed_C0der();
    }
    return 0;
}