/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-16 20:52:46
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
    int a, b, n;
    cin >> a >> b >> n;
    int cnt = 0;
    int x = a / b;
    if(a%b == 0 and a/b == 1){
        cout << 1 << '\n';
        return;
    }
    if(x > 0)
        cnt++;
    int y = n - x;
    if(y > 0)
        cnt++;
    cout << cnt << '\n';
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