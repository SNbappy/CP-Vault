/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-17 15:16:00
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

const int N = (1 << 17) + 9;
int a[N];
int t[N * 4];

int merge(int ans_l, int ans_r, int seg_l, int seg_r) {
    int seg_len = seg_r - seg_l + 1;
    int pw = __lg(seg_len);
    if (pw % 2 == 1)
        return ans_l | ans_r;
    else
        return ans_l ^ ans_r;
}

void build(int n, int b, int e)
{
    if (b == e) {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r], b, e);
}

void upd(int n, int b, int e, int i, int v) {
    if (i < b or i > e)
        return;
    if (b == e) {
        t[n] = v;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    upd(l, b, mid, i, v);
    upd(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r], b, e);
}

void Depressed_C0der()
{
    int n, q;
    cin >> n >> q;
    n = 1 << n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);
    while(q--) {
        int i, x;
        cin >> i >> x;
        upd(1, 1, n, i, x);
        cout << t[1] << "\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
} 