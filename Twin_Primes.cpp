/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-11 04:04:40
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

const int MAXN = 2e7;
vector<bool> isPrime(MAXN + 1, true);

vector<pair<int, int>> twin;

void Sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 3; i + 2 <= MAXN and twin.size() < 1e5; i++)
    {
        if (isPrime[i] and isPrime[i + 2])
            twin.push_back({i, i + 2});
    }
}

void Depressed_C0der()
{
    int n;
    while (cin >> n)
    {
        cout << '(' << twin[n - 1].first << ", " << twin[n - 1].second << ')' << "\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    Sieve();

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}