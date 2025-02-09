/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-28 06:03:42
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst \
    int t; \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    int n;
    cin >> n;

    int k = __lg(n);
    vector<int> p(n);
    int ans;
    vector<bool> vis(n + 1);
    if (n % 2 == 0)
    {
        ans = (2 << k) - 1;
        p[n - 1] = 1 << k;
        p[n - 2] = (1 << k) - 1;
        p[n - 3] = (1 << k) - 2;
        p[n - 4] = 1;
        p[n - 5] = k == 2 ? 5 : 3;
        for (int i = n - 5; i < n; i++)
        {
            vis[p[i]] = true;
        }
        for (int i = 0, x = 1; i < n - 5; i++)
        {
            while (vis[x])
            {
                x++;
            }
            p[i] = x;
            vis[x] = true;
        }
    }
    else
    {
        ans = n;
        p[n - 1] = n;
        p[n - 2] = n - 1;
        p[n - 3] = (1 << k) - 1;
        p[n - 4] = 1;
        p[n - 5] = 2;
        for (int i = n - 5; i < n; i++)
        {
            vis[p[i]] = true;
        }
        for (int i = 0, x = 1; i < n - 5; i++)
        {
            while (vis[x])
            {
                x++;
            }
            p[i] = x;
            vis[x] = true;
        }
    }

    cout << ans << "\n";
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            v &= p[i];
        }
        else
        {
            v |= p[i];
        }
        cout << p[i] << " \n"[i == n - 1];
    }
    assert(v == ans);
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}