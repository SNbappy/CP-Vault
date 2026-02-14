/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-02-15 00:01:52
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
    int w, h;
    cin >> w >> h;
    int kh0;
    cin >> kh0;
    vector<int> x0(kh0);
    for (int i = 0; i < kh0; i++)
    {
        cin >> x0[i];
    }

    int maxh0 = *max_element(all(x0));
    int minh0 = *min_element(all(x0));

    int kh1;
    cin >> kh1;
    vector<int> x1(kh1);
    for (int i = 0; i < kh1; i++)
    {
        cin >> x1[i];
    }

    int maxh1 = *max_element(all(x1));
    int minh1 = *min_element(all(x1));

    int kv0;
    cin >> kv0;
    vector<int> y0(kv0);
    for (int i = 0; i < kv0; i++)
    {
        cin >> y0[i];
    }

    int maxv0 = *max_element(all(y0));
    int minv0 = *min_element(all(y0));

    int kv1;
    cin >> kv1;
    vector<int> y1(kv1);
    for (int i = 0; i < kv1; i++)
    {
        cin >> y1[i];
    }

    int maxv1 = *max_element(all(y1));
    int minv1 = *min_element(all(y1));

    int ans1 = abs(maxh0 - minh0) * h;
    int ans2 = abs(maxh1 - minh1) * h;
    int ans3 = abs(maxv0 - minv0) * w;
    int ans4 = abs(maxv1 - minv1) * w;
    ans1 = max(ans1, ans2);
    ans1 = max(ans1, ans3);
    ans1 = max(ans1, ans4);
    cout << ans1 << "\n";
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