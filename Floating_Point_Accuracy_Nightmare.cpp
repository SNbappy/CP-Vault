/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-03 15:38:27
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Depressed_C0der()
{
    string s;
    cin >> s;
    int c = 1, v = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            int cnt = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] != 'A' and s[j] != 'E' and s[j] != 'I' and s[j] != 'O' and s[j] != 'U')
                {
                    c++;
                    // cout << "piche " <<  c << "\n";
                }
                else
                    break;
            }
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] != 'A' and s[j] != 'E' and s[j] != 'I' and s[j] != 'O' and s[j] != 'U')
                {
                    // cnt++;
                    c++;
                    // cout << "pore " << c << "\n";
                }
                else
                    break;
            }
            // cout << cnt << "\n";
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == 'A' or s[j] == 'E' or s[j] == 'I' or s[j] == 'O' or s[j] == 'U' or s[j] == '?')
                {
                    v++;
                }
                else
                    break;
            }
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == 'A' or s[j] == 'E' or s[j] == 'I' or s[j] == 'O' or s[j] == 'U' or s[j] == '?')
                {
                    v++;
                }
                else
                    break;
            }
            if (c >= 5 and v >= 3)
            {
                cout << "BAD" << "\n";
                return;
            }
            else if (c >= 5 or v >= 3)
            {
                cout << "MIXED" << "\n";
                return;
            }
        }
        // cout << c << " " << v << "\n";
        c = 1, v = 1;
    }

    c = 0, v = 0;
    int mxc = 0, mxv = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U')
        {
            v++;
            c = 0;
            mxv = max(v, mxv);
        }
        else
        {
            c++;
            v = 0;
            mxc = max(c, mxc);
        }
    }

    if (mxc >= 5 or mxv >= 3)
        cout << "BAD" << "\n";
    else
        cout << "GOOD" << "\n";
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
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}