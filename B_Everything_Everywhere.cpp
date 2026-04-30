/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-28 21:02:59
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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // vector<int> prefMx(n, 0), prefMn(n, 0);
    int prefMx = a[0];
    int prefMn = a[0];
    int gcd = a[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        prefMx = max(a[i], prefMx);
        prefMn = min(a[i], prefMn);
        gcd = __gcd(gcd, a[i]);

        if (prefMx - prefMn == gcd)
            cnt++;
    }
    
    int suffMx = a[n - 1];
    int suffMn = a[n - 1];
    gcd = a[n - 1];
    int cmt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        suffMx = max(a[i], suffMx);
        suffMn = min(a[i], suffMn);
        gcd = __gcd(gcd, a[i]);

        if (suffMx - suffMn == gcd)
            cmt++;
    }

    cout << cnt + cmt << "\n";
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