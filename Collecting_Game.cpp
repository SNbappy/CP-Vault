/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-31 13:55:28

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

    int n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<ll> pref(n, 0);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i].first;
    }
    vector<ll> ans(n, -1);
    stack<int> dex;
    for (int i = 0; i < n; i++)
    {
        dex.push(a[i].second);
        if (i == n - 1 or a[i + 1].first > pref[i])
        {
            while (!dex.empty())
            {
                ans[dex.top()] = i;
                dex.pop();
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << el;
}

int main()
{
    tst
    solve();
    return 0;
}
