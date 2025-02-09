/*
coded by: Depressed_C0der

date: 2023-12-22 23:18:16

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define ll long long

void solve()
{

    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    vector<pair<ll, ll>> dir = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

    set<pair<ll, ll>> st1, st2;

    for (auto d : dir)
    {
        int x = xk + d.first;
        int y = yk + d.second;

        st1.insert(make_pair(x, y));

        x = xq + d.first;
        y = yq + d.second;

        st2.insert(make_pair(x, y));
    }

    int ans = 0;
    for (auto pos : st1)
    {
        if(st2.find(pos) != st2.end())
            ans++;
    }

    cout << ans << el;
}

int main()
{
    tst solve();
    return 0;
}