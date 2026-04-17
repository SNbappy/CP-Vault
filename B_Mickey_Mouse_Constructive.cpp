/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-09 20:05:34
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

const int MOD = 676767677;

void Depressed_C0der()
{
    int x, y;
    cin >> x >> y;
    int sum = 0;
    int xx = abs(x - y);
    for (int i = 1; i <= sqrt(xx); i++)
    {
        if (xx % i == 0){
            ++sum;
            if (xx / i != i)
                ++sum;
        }
    }
    sum %= MOD;
    cout << max(sum, 1LL) << '\n';
    for (int i = 0; i < x; i++)
    {
        cout << 1 << ' ';
       
    }

    for (int i = 0; i < y; i++)
    {
        cout << -1 << ' ';
    }

    cout << '\n';
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