/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-01-15 18:34:57
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    // int cnt = 1;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if(mp[i + 1] == 0){
            b.push_back(i + 1);
        }
    }
    sort(rall(b));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0){
            a[i] = b[cnt];
            cnt++;
        }
    }

    auto c = a;
    sort(all(c));
    int l = 0, h = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != c[i]){
            l = i;
            break;
        }
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        if(a[i] != c[i]){
            h = i;
            break;
        }
    }
    
    if(l == h)
        cout << 0 << "\n";
    else
        cout << h - l + 1 << "\n";
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