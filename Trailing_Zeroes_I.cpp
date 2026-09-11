/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-11 18:04:22
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

const int MAXN = 1e6;
vector<bool> isPrime(MAXN + 1, true);
vector<int> prime;

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

    for (int i = 2; i <= MAXN; i++)
    {
        if (isPrime[i])
            prime.push_back(i);
    }
}

void Depressed_C0der()
{
    int n;
    cin >> n;

    int ans = 1;

    for (auto x : prime)
    {
        if (x * x > n)
            break;
        if (n % x == 0)
        {
            int pow = 0;
            while (n % x == 0)
            {
                pow++;
                n /= x;
            }
            ans *= (pow + 1);
        }
    }

    if (n > 1)
        ans *= 2;

    cout << ans - 1 << "\n";
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