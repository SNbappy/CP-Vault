/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-22 11:39:49
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
    set<vector<int>> arr;
    while (n--) {
        int x;
        cin >> x;
        vector<int> nibo;
        set<int> s;
        while(x--) {
            int xx;
            cin >> xx;
            if (!s.count(xx)) {
                s.insert(xx);
                nibo.push_back(xx);
            }
        }
        reverse(all(nibo));
        arr.insert(nibo);
    }

    vector<int> ans;

    while (!arr.empty()) {
        vector<int> nibo = *arr.begin();
        arr.erase(arr.begin());

        for (auto x: nibo)
            ans.push_back(x);

        auto x = arr;
        set<int> temp(all(nibo));
        arr.clear();

        for (auto xx: x) {
            vector<int> v;
            
            for (auto xxx: xx) {
                if (!temp.count(xxx))
                    v.push_back(xxx);
            }
            arr.insert(v);
        }
    }
    
    for (auto x: ans)
        cout << x << " ";
    cout << "\n";
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