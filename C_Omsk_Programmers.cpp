/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-06-12 20:42:25
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
    int a, b, x;
    cin >> a >> b >> x;
    auto c = a, d = b;
    if (a < x and b < x)
    {
        cout << min(abs(a - b), 2LL) << "\n";
        return;
    }
    if (a % x == 0 and b % x == 0 and a != b)
    {
        cout << min(abs(a - b), 2LL) << "\n";
        return;
    }
    if (b > a)
        swap(a, b);
    int cnt = 0;
    while (a > b)
    {
        a /= x;
        cnt++;
    }

    if (a != b)
    {
        cnt += min(abs(a - b), b % x + b / x);
    }
    cout << min(abs(c - d), cnt) << "\n";
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