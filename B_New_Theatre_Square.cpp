/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-08 15:22:20
*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
                cnt++;
        }
    }

    if (x < (y + 1) / 2)
    {
        cout << cnt * x << "\n";
    }
    else
    {
        int ans = 0;
        // cout << cnt << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                // cout << s[i][j] << " " << s[i][j + 1] << "\n";
                if (s[i][j] == s[i][j + 1] and s[i][j] == '.')
                {
                    cnt -= 2;
                    // cout << cnt << "\n";
                    ans += y;
                    j++;
                }
            }
        }
        ans += (cnt * x);
        cout << ans << "\n";
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}