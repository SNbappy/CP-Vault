/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-11 07:08:10
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

int power(int x, int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x % MOD;
    int ans = power(x, y / 2) % MOD;
    ans = (ans * ans) % MOD;
    if(y&1)
        ans = (ans * x) % MOD;
    return ans;
}

void Beche_achi()
{
    int n, m;
    cin >> n >> m;
    cout << power((power(2, n) - 1 + MOD) % MOD, m);
    cout << el;
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