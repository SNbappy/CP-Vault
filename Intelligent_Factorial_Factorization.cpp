/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-11 15:42:38
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

const int MAXN = 100;
vector<bool> isPrime(MAXN + 1, true);

void Sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;
        }
    }
}

int legendre(int n, int m)
{
    int cnt = 0;
    while (n)
    {
        cnt += n / m;
        n /= m;
    }
    return cnt;
}

void Depressed_C0der()
{
    int n;
    cin >> n;
    vector<pair<int, int>> primeCnt;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primeCnt.push_back({i, legendre(n, i)});
        }
    }

    cout << n << " = ";

    for (int i = 0; i < primeCnt.size() - 1; i++)
    {
        cout << primeCnt[i].first << " (" << primeCnt[i].second << ") " << "* ";
    }
    cout << primeCnt[primeCnt.size() - 1].first << " (" << primeCnt[primeCnt.size() - 1].second << ")" << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Sieve();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}