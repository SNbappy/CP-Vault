/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-11 22:27:10
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

const int N = 5e6;
vector<unsigned long long> pref(N + 1);

void prefCnt()
{
    vector<int32_t> phi(N + 1);

    for (int i = 0; i <= N; i++)
    {
        phi[i] = i;
    }

    for (int i = 2; i <= N; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= N; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        pref[i] = pref[i - 1] + 1LL * phi[i] * phi[i];
    }
}

void Depressed_C0der()
{
    int a, b;
    cin >> a >> b;
    cout << pref[b] - pref[a - 1] << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    prefCnt();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}