/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-26 09:49:59
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
    int r, p, s;
    cin >> r >> p >> s;
    string st;
    cin >> st;
    vector<char> v(n, '?');
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'R' and p){
            --p;
            v[i] = 'P';
            cnt++;
        }
        if (st[i] == 'P' and s){
            --s;
            v[i] = 'S';
            cnt++;
        }
        if (st[i] == 'S' and r){
            --r;
            v[i] = 'R';
            cnt++;
        }
    }
    if (cnt < (n + 1) / 2) {
        cout << "NO" << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == '?')
        {
            if (r){
                --r;
                v[i] = 'R';
            }
            else if (p) {
                --p;
                v[i] = 'P';
            }
            else if (s) {
                --s;
                v[i] = 'S';
            }
        }
    }
    cout << "YES" << "\n";

    for (auto x: v)
        cout << x;
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