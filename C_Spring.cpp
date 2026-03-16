/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-16 20:45:37
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
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    int dA = m / a;
    int dB = m / b;
    int dC = m / c;
    int ab = lcm(a, b);
    int bc = lcm(b, c);
    int ca = lcm(c, a);
    int abc = lcm(ab, c);
    // cout << ab << " " << bc << " " << ca << " " << abc << '\n';
    int A = 0, B = 0, C = 0;
    int allCommon = m / abc;
    // cout << allCommon << '\n';
    A += allCommon * 2;
    dA -= allCommon;
    B += allCommon * 2;
    dB -= allCommon;
    C += allCommon * 2;
    dC -= allCommon;
    // cout << dA << ' ' << dB << ' ' << dC << '\n';
    if (abc != ab) {
        int twoCommon = m / ab - allCommon;
        A += twoCommon * 3;
        B += twoCommon * 3;
        dA -= twoCommon;
        dB -= twoCommon;
    }
    if (abc != bc) {
        int twoCommon = m / bc - allCommon;
        B += twoCommon * 3;
        C += twoCommon * 3;
        dB -= twoCommon;
        dC -= twoCommon;
    }
    if (abc != ca) {
        int twoCommon = m / ca - allCommon;
        // cout << twoCommon << '\n';
        A += twoCommon * 3;
        C += twoCommon * 3;
        dA -= twoCommon;
        dC -= twoCommon;
    }

    A += dA * 6;
    B += dB * 6;
    C += dC * 6;
    cout << A << " " << B << " " << C << '\n';
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