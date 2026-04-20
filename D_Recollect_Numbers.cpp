/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-20 09:36:23
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
    if (k < n || k > 2 * n - 1) {
        cout << "NO" << '\n';
        return;
    }

    if (n == k) {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " " << i + 1 << " \n"[i == n - 1];
        }
        return;
    }
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);

    queue<int> seen, unseen;

    k -= n;
    k--;
    seen.push(1);
    seen.push(2);

    for (int i = 3; i <= n; i++)
        unseen.push(i);

    while (k--) {
        ans.push_back(unseen.front());
        seen.push(unseen.front());
        ans.push_back(seen.front());
        seen.pop();
        unseen.pop();
    }

    while(!seen.empty()) {
        ans.push_back(seen.front());
        seen.pop();
    }

    while (!unseen.empty()) {
        ans.push_back(unseen.front());
        ans.push_back(unseen.front());
        unseen.pop();
    }

    cout << "YES" << "\n";

    for (auto x: ans)
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