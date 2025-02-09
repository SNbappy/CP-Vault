/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-18 07:37:35
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
    int n, t, mn = LLONG_MAX;
    cin >> n >> t;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(a[i], mn);
    }

    int low = 0, high = mn * t;

    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (mid / a[i]);
            if (sum >= t)
                break;
        }
        if (sum >= t)
        {
            {
                ans = mid;
                high = mid - 1;
            }
        }
        else
        {
            low = mid + 1;
        }
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

    // tst
    Beche_achi();

    Goodbye
}