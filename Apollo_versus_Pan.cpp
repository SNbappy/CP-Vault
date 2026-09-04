/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-04 12:00:20
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

const int MOD = 1e9 + 7;
const int BITS = 60;

void Depressed_C0der()
{
    int n;
    cin >> n;
    vi a(n);

    int cnt[BITS] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        for (int b = 0; b < BITS; b++) {
            if ((a[i] >> b) & 1) {
                cnt[b]++;
            }
        }
    }

    int pow2[BITS];

    pow2[0] = 1;

    for (int b = 1; b < BITS; b++) {
        pow2[b] = (pow2[b - 1] * 2) % MOD;
    }

    int ans = 0;

    for (int x : a) {
        int AND_sum = 0;
        int OR_sum = 0;

        for (int b = 0; b < BITS; b++) {
            if ((x >> b) & 1) {
                AND_sum += cnt[b] * pow2[b];
                AND_sum %= MOD;
                OR_sum += n * pow2[b];
                OR_sum %= MOD;
            }
            else{
                OR_sum += cnt[b] * pow2[b];
                OR_sum %= MOD;
            }
        }

        ans += AND_sum * OR_sum;
        ans %= MOD;
    }

    cout << ans << "\n";
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