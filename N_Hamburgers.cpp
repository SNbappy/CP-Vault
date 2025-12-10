/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-09 22:43:24
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
    string st;
    cin>> st;
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    int r;
    cin >> r;
    int bb = 0, ss = 0, cc = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if(st[i] == 'B')
            bb++;
        else if(st[i] == 'S')
            ss++;
        else
            cc++;
    }

    int l = 0, h = 1e15, ans = 0;

    while(l <= h){
        int mid = (l + h) / 2;

        int xx = max(0LL, bb * mid - x);
        int yy = max(0LL, ss * mid - y);
        int zz = max(0LL, cc * mid - z);

        int cost = a * xx + b * yy + c * zz;

        if(cost > r){
            h = mid - 1;
        }
        else{
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans << '\n';
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