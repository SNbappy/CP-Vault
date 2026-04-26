/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-26 16:27:05
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    int cnt = 0;
    vector<int> pos(k - 1);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum % 2){
            if (j <= k - 2) {
                if (sum % 2){
                    pos[j] = i;
                    j++;
                    sum = 0;
                }
            }
        }
    }
    // cout << j << "\n";
    if (sum % 2 and j == k - 1) {
        cout << "YES" << "\n";
        for (auto x: pos)
            cout << x + 1 << " ";
        cout << n << "\n";
        // cout << "\n";
        return;
    }

    cout << "NO" << "\n";
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