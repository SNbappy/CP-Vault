/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-12 12:15:50
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long
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

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/// change int to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void Beche_achi()
{
    ll t;
    cin >> t;
    for (ll k = 0; k < t; k++)
    {
        cout << "Case " << k + 1 << ":" << el;
        ll n, m;
        cin >> n >> m;
        list<pair<ll, ll>> g[n];
        for (ll j = 1; j <= m; j++)
        {
            ll u, v, w;
            cin >> u >> v >> w;

            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
        }

        ll src;
        cin >> src;

        vector<ll> dis(n + 1, 1e15);
        priority_queue<pair<int, int>> pq;
        pq.emplace(0, src);

        dis[src] = 0;

        while (!pq.empty())
        {
            auto [w1, par] = pq.top();
            pq.pop();

            for (auto [nbr, w2] : g[par])
            {
                if (dis[nbr] > max(dis[par], w2))
                {
                    dis[nbr] = max(dis[par], w2);
                    pq.emplace(-dis[nbr], nbr);
                }
            }
        }

        for (ll node = 0; node < n; node++)
        {
            if (dis[node] != 1e15)
            {
                cout << dis[node] << el;
            }
            else
                cout << "Impossible" << el;
        }
    }
    
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