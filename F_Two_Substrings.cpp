/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-01 00:25:33
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
    string s;
    cin >> s;
    bool ok = false;
    int id = -1;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'A' and s[i + 1] == 'B')
        {
            cnt++;
            id = i + 1;
            break;
        }
    }
    for (int i = id + 1; i < s.size() - 1; i++)
    {
        if(s[i] == 'B' and s[i + 1] == 'A'){
            cnt++;
            break;
        }
    }
    if(cnt > 1) {
        cout << "YES" << '\n';
        return;
    }
    
    id = -1;
    cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'B' and s[i + 1] == 'A')
        {
            cnt++;
            id = i + 1;
            break;
        }
    }
    for (int i = id + 1; i < s.size() - 1; i++)
    {
        if(s[i] == 'A' and s[i + 1] == 'B'){
            cnt++;
            break;
        }
    }
    if(cnt > 1) {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
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