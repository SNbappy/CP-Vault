/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-16 06:34:02
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
    int n, r;
    cin >> n >> r;
    vector<int> a(n);
    int b = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += (a[i] / 2) * 2;
        // int x = a[i] % 2;
        b += a[i] % 2;
        r -= a[i] / 2;
    }
    if (b < r)
        ans += b;
    else
        ans += (r * 2 - b);
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