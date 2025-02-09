/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-29 11:31:05
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
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n, k;
    cin >> n >> k;

    // auto getSum = [&](ll l, ll r) -> ll
    // {
    //     return ((r * (r + 1) / 2) - (l * (l - 1) / 2));
    // };
    ll left = k, right = k + n - 1, answer = LLONG_MAX;

    while (left <= right)
    {
        ll mid = (left + right) / 2;
        // ll sum1 = getSum(k, mid), sum2 = getSum(mid + 1, k + n - 1);
        ll sum1 = mid * (mid + 1) / 2 - k * (k - 1) / 2;
        ll sum2 = (k + n - 1) * (k + n) / 2 - mid * (mid + 1) / 2;
        answer = min(answer, abs(sum1 - sum2));
        if (sum1 > sum2)
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << answer << el;
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