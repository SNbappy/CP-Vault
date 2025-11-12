/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-08 23:17:01
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
    vector<pair<int, int>> a(3);
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x < y){
            swap(x, y);
        }
        a[i].first = x;
        a[i].second = y;
    }
    sort(a.rbegin(), a.rend());
    cout << a[0].first << a[1].first;
    if(a[0].second > a[2].first){
        cout << a[0].second;
        if(a[1].second > a[2].first){
            cout << a[1].first;
            cout << 
        }
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