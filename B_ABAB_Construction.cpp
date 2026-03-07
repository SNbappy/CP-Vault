/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-07 13:28:51
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

    deque<char> st;
    
    for (int i = 0; i < n; i++) {
        if(i % 2)
            st.push_back('b');
        else
            st.push_back('a');
    }

    int i = 0;
    
    while (!st.empty()) {
        if (s[i] == *st.begin()) {
            st.pop_front();
            i++;
        }
        else if (s[i] == *st.rbegin()) {
            st.pop_back();
            i++;
        }
        else if (s[i] == '?') {
            if(i < n - 1 and s[i + 1] == *st.begin()) {
                st.pop_back();
                i++;
            }
            else {
                st.pop_front();
                i++;
            }
        }
        else {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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