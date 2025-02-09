/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-02 18:38:55

E-mail: bappy.just@gmail.com

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

void solve()
{

    ll n, x;
    cin >> n >> x;
    ll a[n+1];
    a[0] = 0;
    for (ll i = 1; i < n+1; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n+1);
    ll max = 2 * (x - a[n]);
    for (int i = 0; i < n; i++)
    {
        if ((a[i + 1] - a[i]) > max)
            max = a[i + 1] - a[i];
    }
    cout << max << el;
}

int main()
{

    tst
    solve();
    return 0;
}