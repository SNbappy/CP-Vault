/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-23 15:57:11
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
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    x = abs(x);
    y = abs(y);
    int et = 0, fr = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '4')
            fr++;
        else
            et++;
    }
    x -= et;
    y -= et;
    if(x <= 0 and y <= 0){
        cout << "YES" << '\n';
        return;
    }
    else{
        x = max(0LL, x);
        y = max(0LL, y);
        if(fr >= (x + y))
        cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
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