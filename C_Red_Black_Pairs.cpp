/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-21 21:16:06
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
    string s1, s2;
    cin >> s1 >> s2;
    int R = 0, B = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'R')
            R++;
        else
            B++;
        if (s2[i] == 'R')
            R++;
        else
            B++;
    }
    
    vector<pair<char, char>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({s1[i], s2[i]});
    }
    int cnt = 0;
    map<int, int> mp, mt;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i].second and mt[i] == 0 and mp[i] == 0)
        {
            // cout << v[i].first << " " << v[i].second << "\n";
            cnt += 2;
            mp[i]++;
            mt[i]++;
        }
        else if (i != 0 and v[i].first == v[i - 1].first and mp[i] == 0 and mp[i - 1] == 0)
        {
            // cout << v[i].first << " " << v[i - 1].first << "\n";
            cnt += 2;
            mp[i]++;
            mp[i - 1]++;
        }
        else if (i != n - 1 and v[i].first == v[i + 1].first and mp[i] == 0 and mp[i + 1] == 0)
        {
            // cout << v[i].first << " " << v[i + 1].first << "\n";
            cnt += 2;
            mp[i]++;
            mp[i + 1]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0 and v[i].second == v[i - 1].second and mt[i] == 0 and mt[i - 1] == 0)
        {
            // cout << v[i].second << " " << v[i - 1].second << "\n";
            cnt += 2;
            mt[i]++;
            mt[i - 1]++;
        }
        else if (i != n - 1 and v[i].second == v[i + 1].second and mt[i] == 0 and mt[i + 1] == 0)
        {
            // cout << v[i].second << " " << v[i + 1].second << "\n";
            // cout << mt[i] << " " << mt[i + 1] << "\n";
            cnt += 2;  
            mt[i]++;
            mt[i - 1]++;
        }
    }
    cout << (2 * n - cnt) / 2 << "\n";
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