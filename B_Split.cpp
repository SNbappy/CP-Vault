/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-29 20:45:41
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    map<int, int> mp;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int> ctOdd, ctEven;
    for (auto [x, y] : mp)
    {
        if (y % 2 == 0)
            ctEven.push_back(y);
        else
            ctOdd.push_back(y);
    }
    sort(rall(ctEven));
    sort(rall(ctOdd));
    vector<int> ek, arek;
    int cnt = 0;
    int bakiAche = n;

    for (auto y : ctEven)
    {
        if (bakiAche <= 0)
        {
            arek.push_back(y);
        }
        else
        {
            if (y % 2 == 0)
            {
                int p = y / 2;
                if (p % 2 == 0)
                    ++p;
                int q = min(p, bakiAche);
                if (p == q)
                {
                    ek.push_back(p);
                    arek.push_back(y - p);
                    bakiAche -= p;
                }
                else
                {
                    ek.push_back(bakiAche);
                    arek.push_back(y - bakiAche);
                    bakiAche -= bakiAche;
                }
            }
            else
            {
                int p = y;
                int q = min(p, bakiAche);
                if (p == q)
                {
                    ek.push_back(p);
                    arek.push_back(y - p);
                    bakiAche -= p;
                }
                else
                {
                    ek.push_back(bakiAche);
                    arek.push_back(y - bakiAche);
                    bakiAche -= bakiAche;
                }
            }
        }
    }

    for (auto y : ctOdd)
    {
        if (bakiAche == 0)
        {
            arek.push_back(y);
        }
        else
        {
            if (y % 2 == 0)
            {
                int p = y / 2;
                if (p % 2 == 0)
                    ++p;
                int q = min(p, bakiAche);
                if (p == q)
                {
                    ek.push_back(p);
                    arek.push_back(y - p);
                    bakiAche -= p;
                }
                else
                {
                    ek.push_back(bakiAche);
                    arek.push_back(y - bakiAche);
                    bakiAche -= bakiAche;
                }
            }
            else
            {
                int p = y;
                int q = min(p, bakiAche);
                if (p == q)
                {
                    ek.push_back(p);
                    arek.push_back(y - p);
                    bakiAche -= p;
                }
                else
                {
                    ek.push_back(bakiAche);
                    arek.push_back(y - bakiAche);
                    bakiAche -= bakiAche;
                }
            }
        }
    }
    int arekCnt = 0;

    for (auto y : ek)
    {
        if (y % 2 != 0)
            cnt++;
    }
    for (auto y : arek)
    {
        if (y % 2 != 0)
            cnt++;
    }
    for (auto x : arek)
    {
        arekCnt += x;
    }
    // if (arekCnt > n)
    // {
    //     cnt -= (arekCnt - n) + 1;
    // }
    cout << max(cnt, 0LL) << '\n';
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
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}