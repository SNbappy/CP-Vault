/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-10 05:50:44
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
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(k);

    for (int i = 0; i < k; i++)
    {
        a[i].push_back(0);
    }

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        x--;
        a[x].push_back(i);
    }

    int ans = n + 1;
    for (int i = 0; i < k; i++)
    {
        a[i].push_back(n + 1);
        int m1 = 0, m2 = 0;
        for (int j = 1; j < (int)a[i].size(); j++)
        {
            int x = a[i][j] - a[i][j - 1];
            if (x > m1)
                swap(x, m1);
            if (x > m2)
                swap(x, m2);
        }
        m2 = max(m2, (m1 + 1) / 2);
        ans = min(ans, m2);
    }

    cout << ans - 1 << el;
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
