/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-01 10:50:06
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
    int cnt = 0;
    int evenU = 0, evenD = 0;
    bool ckt = false;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0)
            evenU++;
        if (y % 2 == 0)
            evenD++;
        if (x % 2 == 0 and y % 2 != 0)
            ckt = true;
        if (x % 2 == 1 and y % 2 == 0)
            ckt = true;
    }
    int oddU = n - evenU;
    int oddD = n - evenD;
    if (oddU % 2 == 0 and oddD % 2 == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (oddU&1 and oddD&1 and ckt) {
        cout << 1 << "\n";
    }
    else
        cout << -1 << "\n";
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