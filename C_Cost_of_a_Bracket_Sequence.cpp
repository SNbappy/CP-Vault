/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-06-22 14:13:46
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    auto kk = k;
    queue <int> pos, poss;
    int cnt = 0, cmt = 0;
    string ans1(n, '0'), ans2(n, '0');
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            pos.push(i);
        else if (s[i] == ')' and !pos.empty() and k) {
            --k;
            ans1[pos.front()] = '1';
            pos.pop();
        }
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ')')
            poss.push(i);
        else if (s[i] == '(' and !poss.empty() and kk) {
            --kk;
            ans2[poss.front()] = '1';
            poss.pop();
        }
    }

    string test = "";
    for (int i = 0; i < n; i++) {
        if (ans1[i] == '0')
            test += s[i];
    }
    int ok = 0;
    for (int i = 0; i < test.size(); i++)
    {
        if (ok and test[i] == ')'){
            --ok;
            cnt++;
        }

        if (test[i] == '(')
            ok++;
    }

    
    test = "";
    for (int i = 0; i < n; i++) {
        if (ans2[i] == '0')
            test += s[i];
    }
    // cout << test << "\n";
    ok = 0;
    for (int i = 0; i < test.size(); i++)
    {
        if (ok and test[i] == ')'){
            --ok;
            cmt++;
        }

        if (test[i] == '(')
            ok++;
    }
    if (cnt < cmt)
        cout << ans1 << "\n";
    else
        cout << ans2 << "\n";
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