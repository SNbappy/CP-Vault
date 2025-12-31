/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-31 11:33:58
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
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> a(q);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'B')
            cnt++;
    }
    
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int ct = 0;
        int j = 0;
        if(cnt == 0){
            cout << x << "\n";
            continue;
        }
        while (1)
        {
            if (x == 0)
                break;
            if (s[j] == 'A')
            {
                x -= 1;
            }
            else
                x /= 2;
            ct++;
            j++;
            j %= n;
        }
        cout << ct << "\n";
    }
    // cout << cnt << "\n";
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