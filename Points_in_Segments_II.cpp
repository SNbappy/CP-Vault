/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-15 10:17:39
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

const int N = 5e4 + 9;
int a[N], b[N], Q[N], ans[3 * N];
int d[3 * N];

int t[3 * N * 4];
void build(int n, int b, int e) {
    if (b == e) {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void Depressed_C0der()
{
    int n, q;
    cin >> n >> q;
    set<int> all;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        all.insert(a[i]);
        all.insert(b[i]);
    }
    for (int i = 1; i <= q; i++) {
        cin >> Q[i];
        all.insert(Q[i]);
    }
    map<int, int> mp;
    int id = 0;
    for (auto x: all)
        mp[x] = ++id;
    for (int i = 1; i <= n; i++) {
        a[i] = mp[a[i]];
        b[i] = mp[b[i]];
    }
    for (int i = 1; i <= q; i++) {
        Q[i] = mp[Q[i]];
    }
    for (int i = 1; i <= n; i++) {
        for (int k = a[i]; k <= b[i]; k++) {
            ans[k]++;
        }
    }
    for (int i = 1; i <= q; i++) {
        int k = Q[i];
        cout << ans[k] << '\n';
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
        cout << "Case " << i << ":\n";
        Depressed_C0der();
    }
    return 0;
}