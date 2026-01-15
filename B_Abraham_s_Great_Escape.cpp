/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-01-03 17:07:13
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
    int n, k;
    cin >> n >> k;

    if (k == n * n - 1)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
        for (int i = 0; i < n; i++)
        {
            string s = "";
            for (int j = 0; j < n; j++)
            {
                if (k > 0)
                {
                    s += 'U';
                    k--;
                }
                else if (i == n - 1 && j == n - 1)
                {
                    s += 'L';
                }
                else if (i == n - 1)
                {
                    s += 'R';
                }
                else
                {
                    s += 'D';
                }
            }
            cout << s << "\n";
        }
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