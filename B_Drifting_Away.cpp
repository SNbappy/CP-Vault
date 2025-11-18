/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-18 22:14:35
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
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if((s[i] == '>' || s[i] == '*') and (s[i + 1] == '<' || s[i + 1] == '*')){
            cout << -1 << '\n';
            return;
        }
    }
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '<' || s[i] == '*')
            ans = max(ans, i + 1);
        if(s[i] == '>' || s[i] == '*')
            ans = max(ans, (long long)s.size() - i);
    }
    cout << ans << '\n';
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