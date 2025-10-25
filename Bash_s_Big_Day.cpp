/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-23 23:22:58
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve() {
    int n;
    cin >> n;
    const int MAXA = 100000;
    vector<int> cnt(MAXA + 1, 0);
    int maxA = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ++cnt[x];
        maxA = max(maxA, x);
    }

    int best = 0;
    for (int d = 2; d <= maxA; ++d)
    {
        int total = 0;
        for (int m = d; m <= maxA; m += d)
            total += cnt[m];
        best = max(best, total);
    }
    cout << max(1LL, best) << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;   

    for (int i = 1; i <= tc; i++) {
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}