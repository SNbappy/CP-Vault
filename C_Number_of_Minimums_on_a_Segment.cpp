/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-15 00:12:39
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

const int N = 1e5 + 9, inf = 1e9 + 8;
int a[N];

struct node
{
    int mn, count;
};

node t[N * 4];

node merge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if (l.mn == ans.mn)
        ans.count += l.count;
    if (r.mn == ans.mn)
        ans.count += r.count;
    return ans;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b];
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void upd(int n, int b, int e, int i, int v)
{
    if (i < b or e < i)
        return;
    if (b == e)
    {
        t[n].mn = v;
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    upd(l, b, mid, i, v);
    upd(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i or j < b)
        return {inf, 1};
    if (b >= i and e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void Depressed_C0der()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);

    while (q--)
    {
        int ty;
        cin >> ty;
        if (ty == 1)
        {
            int i, v;
            cin >> i >> v;
            ++i;
            // a[i] = v;
            upd(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            --r;
            ++l, ++r;
            // long long ans = 0;
            // for (int i = l; i <= r; i++)
            //     ans += a[i];
            node ans = query(1, 1, n, l, r);
            cout << ans.mn << " " << ans.count << "\n";
        }
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