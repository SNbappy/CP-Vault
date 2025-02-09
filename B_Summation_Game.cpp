/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-14 12:22:09

*/

//************************************************************************
//************************************************************************

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

//************************************************************************
//************************************************************************

void Beche_achi()
{

    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll sum = 0;

    ll ind = n - x;

    for (ll i = 0; i < n; i++)
    {
        if (i < ind)
        {
            sum += a[i];
        }

        else
        {
            sum -= a[i];
        }
    }

    ll ans = sum;

    for (ll i = n - 1; i >= n - k; i--)
    {
        if (i >= ind)
        {
            sum += a[i];

            if (ind - 1 >= 0)
            {
                sum -= 2 * a[ind - 1];

                ind--;
            }

            ans = max(sum, ans);
        }
    }

    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}