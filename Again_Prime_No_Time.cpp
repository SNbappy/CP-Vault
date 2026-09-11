/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-11 14:28:45
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

int legendre(int n, int m)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt += n / m;
        n /= m;
    }
    return cnt;
}

void Depressed_C0der()
{
    int m, n;
    cin >> m >> n;
    vector<pair<int, int>> primes;
    for (int i = 2; i <= m; i++)
    {
        int cnt = 0;
        if (m % i == 0)
        {
            while (m % i == 0)
            {
                cnt++;
                m /= i;
            }
            primes.push_back({i, cnt});
        }
    }

    int mn = LLONG_MAX;

    for (int i = 0; i < primes.size(); i++)
    {
        int l = legendre(n, primes[i].first);
        l /= primes[i].second;
        mn = min(mn, l);
    }
    if (mn == 0)
        cout << "Impossible to divide" << "\n";
    else
        cout << mn << "\n";
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
        cout << "Case " << i << ":\n";
        Depressed_C0der();
    }
    return 0;
}