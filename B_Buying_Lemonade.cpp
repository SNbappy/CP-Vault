/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-20 15:45:40
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
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(all(a));
    int sum = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = (n - i + 1) * (a[i] - a[i - 1]);
        if (sum + x >= k)
        {
            ans += (k - sum);
            break;
        }
        ans += x + 1;
        sum += x;
    }
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