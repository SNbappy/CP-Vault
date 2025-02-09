/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-18 11:17:43

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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a;
    vector<int> b(n), ans(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.emplace_back(x, i);
    }

    for (auto &x : b)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (ll i = 0; i < n; i++)
    {
        ans[a[i].second] = b[i];
    }
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}