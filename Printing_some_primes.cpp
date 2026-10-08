/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-01 16:17:09
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif
const int N = 1e8 + 9, M = 1e8;
vector<bool> isPrime(N + 1, true);
vector<int> prime;

void sieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j+= i) {
                isPrime[j] = false;
            }
        }
    }
}

void Depressed_C0der()
{
    sieve();
    for (int i = 2; i <= M; i++) {
        if (isPrime[i])
            prime.push_back(i);
    }
    cout << prime.size() << "\n";
    for (int i = 0; i < 1000; i += 100) {
        int x = prime[i] % 100;
        cout << x << "\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}