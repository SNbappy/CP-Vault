/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-22 09:46:51
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
    vector<pair<string, int>> a(n);
    map<string, int> mp;
    int mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        mp[a[i].first] += a[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mp[a[i].first], mx);
    }
    
    map<string, int> cr;
    string st;
    for (int i = 0; i < n; i++)
    {
        cr[a[i].first] += a[i].second;
        if(cr[a[i].first] >= mx and mp[a[i].first] == mx)
        {
            cout << a[i].first << "\n";
            return;
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
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}