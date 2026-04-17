/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-17 19:03:29
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    bool ok = true;
    int l = n - k + 1;
    int r = k;
    if (l <= r)
    {
        vector<bool> x(n + 1, false), y(n + 1, false);
        for (int i = l; i <= r; i++)
        {
            x[a[i]] = true;
        }

        for (int i = 1; i <= n; i++)
        {
            if (i < l || i > r)
            {
                if (b[i] != -1 and b[i] != a[i])
                    ok = false;
            }
            else
            {
                if (b[i] != -1)
                {
                    if (b[i] < 1 || b[i] > n || !x[b[i]] || y[b[i]])
                        ok = false;
                    else
                        y[b[i]] = true;
                }
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (b[i] != -1 and b[i] != a[i])
                ok = false;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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