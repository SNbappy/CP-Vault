/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-09 16:14:28
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
    int i = 0, j = 0, k = 0;

    vector<int> num;
    num.push_back(1);
    for (int loop = 0; loop <= 1500; loop++)
    {
        int cnt2 = num[i] * 2, cnt3 = num[j] * 3, cnt5 = num[k] * 5;

        if (cnt2 <= cnt3 and cnt2 <= cnt5)
        {
            num.push_back(cnt2);
            i++;

            if (cnt2 == cnt3)
                j++;

            if (cnt2 == cnt5)
                k++;
        }
        else if (cnt3 <= cnt5)
        {
            num.push_back(cnt3);

            if (cnt3 == cnt5)
                k++;
            j++;
        }
        else
        {
            num.push_back(cnt5);
            k++;
        }
    }

    cout << "The 1500'th ugly number is " << num[1499] << ".\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}