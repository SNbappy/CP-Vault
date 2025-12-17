/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-13 11:31:01
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
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    sort(all(odd));
    sort(even.rbegin(), even.rend());
    for (int i = 1; i < even.size(); i++)
    {
        even[i] += even[i - 1];
    }
    for (int k = 1; k <= n; k++)
    {
        if(odd.empty()){
            cout << "0 ";
            continue;
        }
        int ev = min((int)even.size(), k - 1);
        int od = odd.size();
        if(od % 2 == 0)
            od--;
        if((od + ev) % 2 != k % 2)
            ev--;
        if(ev + od < k || ev < 0)
            cout << 0 << " ";
        else{
            int ek = ev == 0 ? 0 : even[ev - 1];
            cout << ek + odd.back() << " ";
        }
    }
    cout << '\n';
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