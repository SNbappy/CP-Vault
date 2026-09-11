/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-09-25 09:41:52
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> div;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.push_back(i);
            if (i * i != n)
                div.push_back(n / i);
        }
    }
    sort(all(div));
    int cnt = 0;
    for (auto x: div) {
        if (x > a)
            break;
        int rem = n / x;
        for (auto y : div) {
            if (rem % y)
                continue;
            if (y > b)
                break;
            if(rem / y <= c)
                cnt++;
        }
    }
    cout << cnt << "\n";
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}
