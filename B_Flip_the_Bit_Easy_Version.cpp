/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-08 21:12:24
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    --x;
    int cnt = 0;
    int exp = 0;
    if (a[x] == 1)
        exp = 1;
    bool ok = false;
    for (int i = 0; i <= x; i++)
    {
        if (a[i] != exp and !ok)
        {
            ok = true;
        }
        if (ok)
        {
            if (i == 0)
                cnt++;
            else if (a[i] != a[i - 1])
                cnt++;
        }
    }

    int cmt = 0;
    ok = false;
    for (int i = n - 1; i >= x; i--)
    {
        if (a[i] != exp and !ok)
        {
            ok = true;
        }
        if (ok)
        {
            if (i == n - 1)
                cmt++;
            else if (a[i] != a[i + 1])
                cmt++;
        }
    }
    cmt = max(cnt, cmt);
    if (cmt % 2 == 0)
        cout << cmt << '\n';
    else
        cout << cmt + 1 << '\n';
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