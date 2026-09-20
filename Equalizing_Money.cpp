/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-20 12:01:30
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define sz(x) (int)x.size()
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define vpii vector<pair<int, int>>
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

const int N = 1005;
vector<int> g[N];
bool vis[N];

vector<int> a(N);

int total_sum, total_person;

void dfs(int u)
{
    vis[u] = true;
    total_person++;
    total_sum += a[u];
    for (int v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

void Depressed_C0der()
{

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        g[i].clear();
        vis[i] = false;
    }

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
    set<int> st;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            total_sum = 0;
            total_person = 0;
            dfs(i);

            if (total_sum % total_person == 0)
            {
                int each_amount = total_sum / total_person;
                st.insert(each_amount);
            }
            else
            {
                cout << "No" << "\n";
                return;
            }
        }
    }

    if (st.size() != 1)
        cout << "No" << "\n";
    else
        cout << "Yes" << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}