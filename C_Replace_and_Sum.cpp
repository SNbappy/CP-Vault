/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-23 11:08:02
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int mx = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < b[i] || (i < n - 1 and a[i] < a[i + 1]))
        {
            if (i == n - 1)
                a[i] = b[i];
            else
                a[i] = max(b[i], a[i + 1]);
        }
        mx = max(mx, a[i]);
        if (a[i] < mx)
            a[i] = mx;
    }
    // for (auto x: a)
    //     cout << x << " ";
    // cout << "\n";
    vector<int> pref(n);
    pref[0] = a[0];

    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + a[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l, --r;
        if (l == 0)
            cout << pref[r] << " ";
        else
            cout << pref[r] - pref[l - 1] << " ";
    }
    cout << "\n";
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