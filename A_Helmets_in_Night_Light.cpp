/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-21 21:03:10
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
#define all(n) n.begin(),n.end()
#define pb push_back

/************************************************************/

void Beche_achi()
{

    int n, p;
    cin >> n >> p;

    vector<int>A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<int> B(n);
    for (int i = 0; i < n; i++)
        cin >> B[i];

    vector<pair<ll, ll>> cost_cap;
    cost_cap.push_back({p, n + 1});
    for (int i = 0; i < n; i++)
        cost_cap.pb(make_pair(B[i], A[i]));

    sort(all(cost_cap));

    int total = 1;
    ll cost = p;
    int idx = 0;
    while (total < n)
    {
        int left = n - total;

        if (cost_cap[idx].second <= left)
        {
            total += cost_cap[idx].second;
            cost = cost + cost_cap[idx].first * 1LL * cost_cap[idx].second;
        }
        else
        {
            total = n;
            cost = cost + left * 1LL * cost_cap[idx].first;
        }
        idx++;
    }
    cout << cost << el;
}

Depressed_C0der
{

   tst
   Beche_achi();

    Goodbye
}