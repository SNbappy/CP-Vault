/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-12-29 21:09:43
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
    int a, b;
    cin >> a >> b;
    int tempA = a, tempB = b;
    vector<int> al, bl;
    for (int i = 0; i < 64; i++)
    {
        if (i % 2 == 0)
        {
            int x = 1 << i;
            al.push_back(x);
        }
        else
        {
            int x = 1 << i;
            bl.push_back(x);
        }
    }
   
    // phase 1
    int alcnt = 0;
    for (int i = 0; i < 64; i++)
    {
        if(al[i] > a){
            break;
        }
        alcnt++;
        a -= al[i];
    }

    int blcnt = 0;
    for (int i = 0; i < 64; i++)
    {
        if(bl[i] > b)
            break;
        blcnt++;
        b -= bl[i];
    }
    int xx;
    if(alcnt > blcnt)
        xx = 2 * blcnt + 1;
    else
        xx = alcnt * 2;
    

    // phase 2
    int alcnt2 = 0;
    for (int i = 0; i < 64; i++)
    {
        if (al[i] > tempB)
        {
            break;
        }
        alcnt2++;
        tempB -= al[i];
    }

    int blcnt2 = 0;
    for (int i = 0; i < 64; i++)
    {
        if (bl[i] > tempA)
            break;
        blcnt2++;
        tempA -= bl[i];
    }
    int yy;
    if (alcnt2 > blcnt2)
        yy = 2 * blcnt2 + 1;
    else
        yy = alcnt2 * 2;

    cout << max(xx, yy) << "\n";
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