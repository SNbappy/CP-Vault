/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-30 20:43:46
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
        /* code */
        cin >> a[i];
    }
    vector<int> tr, tw, si, ot;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 6 == 0)
            si.push_back(a[i]);
        else if (a[i] % 3 == 0)
            tr.push_back(a[i]);
        else if (a[i] % 2 == 0)
            tw.push_back(a[i]);
        else
            ot.push_back(a[i]);
    }
    vector<int> ans;
    while (!si.empty())
    {
        ans.push_back(si.back());
        si.pop_back();
    }
    
    while (!tr.empty())
    {
        ans.push_back(tr.back());
        tr.pop_back();
    }

    while (!ot.empty())
    {
        ans.push_back(ot.back());
        ot.pop_back();
    }
    
    while (!tw.empty())
    {
        ans.push_back(tw.back());
        tw.pop_back();
    }
    
    for (auto x : ans)
        cout << x << " ";
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