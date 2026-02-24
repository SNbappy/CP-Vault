/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-02-23 21:03:10
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

void Depressed_C0der()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> d;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            d.push_back('a');
        else
            d.push_back('b');
    }

    int cnta = 0, cntb = 0, cntq = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            cnta++;
        else if (s[i] == 'b')
            cntb++;
        else
            cntq++;
    }
    
    if(n % 2 == 0) {
        if (cnta + cntq >= cntb and cntb + cntq >= cnta){
            if(s[0] )
        }
        else
        {
            cout << "NO" << "\n";
            return;
        }
    }
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
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}