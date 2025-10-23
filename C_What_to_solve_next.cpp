/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-10-23 11:52:05
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
    int n, p;
    cin >> n >> p;
    int a[n][p];
    char c[n][p];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < p; j++)
        {
            cin >> c[i][j];
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < p; i++)
    {
        int solved = 0, attempt = 0, incorrect = 0;
        for (int j = 0; j < n; j++)
        {
            // cout << c[j][i] << " ";
            // cout << a[j][i] << " ";
            if (c[j][i] == '+')
            {
                solved++;
            }
            if ((c[j][i] == '+') || (c[j][i] == '-' and a[j][i] != 0))
            {
                attempt++;
            }
            incorrect += a[j][i];
        }
        cout << solved << " " << attempt << " " << incorrect << endl;
    }

    // for (int i = 0; i < p; i++)
    // {
    //     int solved = 0, attempt = 0, incorrect = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         char c;
    //         int x;
    //         cin >> c >> x;
    //         if(c == '+')
    //         {
    //             solved++;
    //         }
    //         attempt += x;
    //         incorrect += x;
    //     }
    //     cout << solved << " " << attempt << " " << incorrect << endl;
    // }
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