/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-23 23:01:16
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] ^= pref[i - 1];
    }
    if(pref[n - 1] == 0){
        cout << "YES" << '\n';
        return;
    }
    for (int i = 0; i < n; i++){
        int x = pref[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = pref[j] ^ pref[i];
            int z = pref[n] ^ pref[j];
            if(x == y and y == z){
                cout << "YES" << '\n';
                return;
            }
        }
        
    }
    cout << "NO" << '\n';
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