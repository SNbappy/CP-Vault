/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-01-02 11:34:50
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
    int a, b;
    cin >> a >> b;
    if (__builtin_clz(a) > __builtin_clz(b))
        cout << "-1" << "\n";
    else if (a == b)
        cout << "0" << "\n";
    else
    {
        vector<int> val;
        for (int i = 0; i < 31; i++)
        {
            int x = 1 << i;
            if (x <= a and (a & x) == 0)
            {
                a += x;
                val.push_back(x);
            }
        }
        for (int i = 0; i < 31; i++)
        {
            int x = 1 << i;
            if(x <= a and (b&x) == 0)
                val.push_back(x);
        }
        cout << val.size() << "\n";
        for(auto y : val)
            cout << y << " ";
        cout << "\n";
    }
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