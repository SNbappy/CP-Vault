/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-08 11:49:58
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    int pref1 = 0;
    int pref2 = 0, ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        int cur1 = a[i] + max(0LL, pref2);
        int cur2 = b[i] + max(0LL, pref1);

        ans = max(ans, max(cur1, cur2));
        pref1 = max(pref1, cur1);
        pref2 = max(pref2, cur2);
    }

    cout << ans << '\n';
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}