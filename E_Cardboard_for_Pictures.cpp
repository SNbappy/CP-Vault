/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-18 19:28:46
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
    ll n, C;
    cin >> n >> C;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto Possible = [&](ll w) -> ll
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll side = (2LL * w) + arr[i];
            ll area = side * side;
            total += area;
            if (total > C)
                return false;
        }
        return true;
    };

    ll low = 0LL, high = (ll)1e10, ans;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2LL;
        if (Possible(mid))
        {
            ans = mid;
            low = mid + 1LL;
        }
        else
        {
            high = mid - 1LL;
        }
    }

    cout << ans << endl;
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
