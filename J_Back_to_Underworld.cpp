/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-17 17:14:44
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

const int Max = 20005;

vector<int> graph[Max];
bool visited[Max];
int color[Max];

ll bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    visited[src] = true;
    color[src] = 0;

    ll count[2] = {1, 0};

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();

        for (ll v : graph[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                color[v] = 1 - color[u];
                count[color[v]]++;
                q.push(v);
            }
        }
    }
    return max(count[0], count[1]);
}

void Beche_achi()
{
    int t;
    cin >> t;
    for (ll pq = 0; pq < t; pq++)
    {
        cout << "Case " << pq + 1 << ": ";
        int n;
        cin >> n;
        for (ll i = 0; i < Max; i++)
        {
            graph[i].clear();
            visited[i] = false;
        }
        set<ll> nodes;

        for (ll i = 0; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].pb(v);
            graph[v].pb(u);
            nodes.insert(u);
            nodes.insert(v);
        }

        ll total = 0;

        for (ll node : nodes)
        {
            if (!visited[node])
                total += bfs(node);
        }

        cout << total << el;
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