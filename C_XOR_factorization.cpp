/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-20 14:18:24
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
    int a[k]{}, p = 0;
    if (k & 1)
        for (int i = 0; i < k; i++)
            a[i] = n;
    else
    {
        for (int i = 30; i >= 0; i--)
        {
            if (n >> i & 1)
            {
                for (int j = 0; j < k; j++)
                    if (j != min(p, k - 1))
                        a[j] += (1 << i);
                if (p < k)
                    p++;
            }
            else
                for (int j = 0; j < p / 2 * 2; j++)
                    a[j] += (1 << i);
        }
    }
    for (int i = 0; i < k; i++)
        cout << a[i] << (i + 1 == k ? '\n' : ' ');
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