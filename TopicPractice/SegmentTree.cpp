/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-14 18:11:50
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
int t[N * 4];

void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}

int query(int node, int b, int e, int i, int j)
{
    if (b > j or e < i)
        return 0;
    if (b >= i and e <= j)
        return t[node];

    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void upd(int node, int b, int e, int i, int x)
{
    if (b > i or e < i)
        return;
    if (b == e and b == i)
    {
        t[node] = x;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, x);
    upd(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r];
}

void Depressed_C0der()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
        a[i] = i;

    build(1, 1, n);

    cout << t[1] << "\n";
    cout << query(1, 1, n, 2, 4) << "\n";
    upd(1, 1, n, 3, 10);
    cout << query(1, 1, n, 2, 4) << "\n";
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