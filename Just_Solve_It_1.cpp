/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-10-01 13:30:11
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

const int N = 1e6 + 5;
int spf[N];

void Depressed_C0der()
{
    for (int i = 2; i <= N; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j <= N; j += i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        cout << spf[x] << ' ';

        int gpf = 0;
        int distinct_prime_factors = 0;
        int total_prime_factors = 0;
        int number_of_divisors = 1;
        int sum_of_divisors = 0;

        while (x > 1)
        {
            int p = spf[x];

            gpf = max(gpf, p);

            distinct_prime_factors++;

            int power_of_k = 0;
            int prime_power = 1;

            while (x % p == 0)
            {
                total_prime_factors++;

                power_of_k++;

                prime_power *= p;

                x /= p;
            }

            number_of_divisors *= (power_of_k + 1);

            sum_of_divisors *= (p * prime_power - 1) / (p - 1);
        }

        cout << gpf << ' ';

        cout << distinct_prime_factors << " ";

        cout << total_prime_factors << " ";

        cout << number_of_divisors << " ";

        cout << sum_of_divisors << "\n";
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