/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-17 14:44:07
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

int ask(vector<int> v)
{
    cout << "? ";
    cout << v.size() << " ";
    for (auto x: v)
        cout << x << ' ';
    cout << endl;

    int x;
    cin >> x;
    return x;
}

void Depressed_C0der()
{
    int n;
    cin >> n;

    int last = -1;
    int low = 1, high = 2 * n + 1;
    while (low <= high) {
        vector<int> v;
        int mid = (low + high) / 2;
        for (int i = 1; i <= mid; i++)
        {
            v.push_back(i);
        }
        int ans = ask(v);
        if ((v.size() - ans) % 2 == 1)
            last = mid, high = mid - 1;
        else
            low = mid + 1;
    }

    int first = -1;
    low = 1, high = last - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        vector<int> v;
        for (int i = mid; i <= last; i++)
        {
            v.push_back(i);
        }
        int ans = ask(v);
        if((v.size() - ans) % 2 == 1)
            first = mid, low = mid + 1;
        else
            high = mid - 1;
    }

    int middle = -1l;
    low = first + 1, high = last - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        vector<int> v;
        for (int i = first; i <= mid; i++)
        {
            v.push_back(i);
        }
        v.push_back(last);
        int ans = ask(v);
        if ((v.size() - ans) % 2 == 1)
            middle = mid, high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "! " << first << " " << middle << " " << last << endl;
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