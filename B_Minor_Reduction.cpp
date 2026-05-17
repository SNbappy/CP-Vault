/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-16 17:57:21
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
    string s;
    cin >> s;

    vector<int> x;

    for (auto c : s)
    {
        x.push_back(c - '0');
    }

    bool ok = false;

    for (int i = s.size() - 1; i >= 1; i--)
    {
        if (x[i] + x[i - 1] >= 10)
        {
            x[i] += x[i - 1] - 10;
            x[i - 1] = 1;
            ok = true;
            break;
        }
    }

    if (!ok)
    {
        x[1] += x[0];
        for (int i = 1; i < s.size(); i++){
            cout << x[i];
        }
        cout << '\n';
        return;
    }

    for (auto xx: x)
        cout << xx;
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