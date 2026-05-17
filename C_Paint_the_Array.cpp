/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-17 15:35:11
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
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            x = gcd(x, a[i]);
        else
            y = gcd(y, a[i]);
    }
    bool ok = true;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % x == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << x << "\n";
        return;
    }
    ok = true;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % y == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << y << "\n";
    else
        cout << 0 << "\n";
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