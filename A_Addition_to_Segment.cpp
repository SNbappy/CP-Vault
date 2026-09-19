/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-17 16:22:31
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

const int N = 1e5 + 9;
int a[N];

long long t[4 * N], lazy[4 * N];

void push(int n, int b, int e)
{
    if (lazy[n] == 0)
        return;

    t[n] = t[n] + (e - b + 1) * lazy[n];
    if (b != e)
    {
        int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }

    lazy[n] = 0;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void upd(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (e < i or j < b)
        return;
    if (b >= i and e <= j)
    {
        lazy[n] += v;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    upd(l, b, mid, i, j, v);
    upd(r, mid + 1, e, i, j, v);
    t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (e < i or j < b)
        return 0;
    if (b >= i and e <= j)
        return t[n];
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void Depressed_C0der()
{
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int ty;
        cin >> ty;
        if (ty == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            --r;

            ++l, ++r;
            for (int i = l; i <= r; i++)
            {
                a[i] += v;
            }
        }
        else
        {
            int i;
            cin >> i;
            ++i;
            cout << a[i] << "\n";
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