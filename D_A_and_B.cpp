/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-09 12:35:26
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
    string s;
    cin >> s;
    bool oka, okb;
    int cnta, cntb;
    if(s[0] == 'a'){
        oka = true, okb = false;
        cnta = 0, cntb = -1;
    }
    else{
        okb = true, oka = false;
        cntb = 0, cnta = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if(!oka and s[i] == 'a'){
            cnta++;
            oka = true;
            okb = false;
        }
        if(!okb and s[i] == 'b'){
            cntb++;
            okb = true;
            oka = false;
        }
    }
    // cout << min(cnta, cntb) << '\n';
    int x = min(cnta, cntb);
    cout << max(x, 0LL) << '\n';
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