/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-05-15 09:50:04
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
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    int niteParbo = 0;
    int j = n - 1;

    for (int i = 0; i < n; i++)
    {

        while (i < j && a[i] + a[j] > r)
        {
            j--;
        }

        if (i >= j)
            break;

        niteParbo += (j - i);
    }

    int baad = 0;
    j = n - 1;

    for (int i = 0; i < n; i++)
    {

        while (i < j && a[i] + a[j] > (l - 1))
        {
            j--;
        }

        if (i >= j)
            break;

        baad += (j - i);
    }

    cout << niteParbo - baad << '\n';
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