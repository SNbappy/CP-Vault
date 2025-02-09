/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-29 20:54:34
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst   \
    int t;    \
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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            ans = max(ans, a[i + 1] - a[i]);
        }
    }
    else
    {
        ans = 1E18;
        for (int i = 0; i < n; i += 2)
        {
            int res = 0;
            for (int j = 0; j < n; j += 2)
            {
                if (j == i)
                {
                    j--;
                    continue;
                }
                res = max(res, a[j + 1] - a[j]);
            }
            ans = min(ans, res);
        }
    }
    ans = max(ans, 1LL);
    
    cout << ans << el;
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