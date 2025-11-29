/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-25 11:44:37
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
    int n, k, q;
    cin >> n >> k >> q;
    vector<pair<int, int>> a, b;
    for (int i = 0; i < q; i++)
    {
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 1)
            a.push_back(make_pair(l - 1, r - 1));
        else
            b.push_back(make_pair(l - 1, r - 1));
    }
    vector<int> ans(n);
    for(auto [l,r]: a){
        for (int i = l; i <= r; i++)
        {
            ans[i] = k;
        }
        
    }

    auto temp = ans;
    for(auto [l, r] : b){
        for (int i = l; i <= r; i++)
        {
            if(temp[i] == k)
                ans[i] = k + 1;
            else
                ans[i] = i % k;
        }
        
    }

    for(auto x: ans)
        cout << x << ' ';
    cout << '\n';
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}