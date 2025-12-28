/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-27 13:32:15
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

const int MOD1 = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int BASE1 = 3;
const int BASE2 = 5;

void Depressed_C0der()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k > n)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> p1(n + 1), p2(n + 1);
    p1[0] = 1;
    p2[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        p1[i] = (p1[i - 1] * BASE1) % MOD1;
        p2[i] = (p2[i - 1] * BASE2) % MOD2;
    }

    vector<int> h1(n + 1, 0), h2(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        h1[i + 1] = (h1[i] * BASE1 + (s[i] - '0' + 1)) % MOD1;
        h2[i + 1] = (h2[i] * BASE2 + (s[i] - '0' + 1)) % MOD2;
    }

    vector<pair<int, int>> hashes;
    hashes.reserve(n - k + 1);

    for (int i = 0; i <= n - k; i++)
    {
        int val1 = (h1[i + k] - h1[i] * p1[k] % MOD1 + MOD1) % MOD1;
        int val2 = (h2[i + k] - h2[i] * p2[k] % MOD2 + MOD2) % MOD2;
        hashes.push_back({val1, val2});
    }

    sort(all(hashes));
    int distinct_count = 0;
    if (!hashes.empty())
    {
        distinct_count = 1;
        for (size_t i = 1; i < hashes.size(); i++)
        {
            if (hashes[i] != hashes[i - 1])
            {
                distinct_count++;
            }
        }
    }

    cout << distinct_count << endl;
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