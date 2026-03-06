/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-06 19:07:27
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
    string s, tt;
    cin >> s >> tt;

    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    string st = "";

    for (int i = 0; i < tt.size(); i++)
    {
        if (mp[tt[i]] > 0)
        {
            mp[tt[i]]--;
        }
        else
            st += tt[i];
    }

    sort(all(st));

    int j = 0, k = 0;
    string ans = "";
    int next_diff = 0;
    while (j < s.size() || k < st.size())
    {
        if (j == s.size())
        {
            ans += st[k++];
        }
        else if (k == st.size())
        {
            ans += s[j++];
        }
        else if (s[j] < st[k])
        {
            ans += s[j++];
        }
        else if (st[k] < s[j])
        {
            ans += st[k++];
        }
        else
        {
            if (next_diff <= j)
            {
                next_diff = j;
                while (next_diff < s.size() && s[next_diff] == s[j])
                {
                    next_diff++;
                }
            }

            if (next_diff < s.size() && s[next_diff] < s[j])
            {
                ans += s[j++];
            }
            else
            {
                ans += st[k++];
            }
        }
    }

    auto xxx = ans;
    sort(all(xxx));
    sort(all(tt));
    if(xxx == tt)
    cout << ans << "\n";
    else
        cout << "Impossible" << "\n";
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