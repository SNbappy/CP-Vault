/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-31 17:15:19
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
    int y, k;
    cin >> y >> k;
    vector<int> div;
    for (int i = 1; i * i <= y; i++)
    {
        if (y % i == 0)
        {
            div.push_back(i);
            if (y / i != i)
            {
                div.push_back(y / i);
            }
        }
    }
    sort(all(div));
    // for (auto x : div)
    //     cout << x << " ";
    // cout << '\n';
    int ans = k + 1;
    int lastK = 0;
    for (auto x : div)
    {
        if (ans >= x and x != div.back())
        {
            ans += x - 1;
            // cout << x << " " << ans << '\n';
        }
        else
            break;
    }
    int x = (k - y) + 1;
    if(x > 0){
        ans += ((y - 1) * x);
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