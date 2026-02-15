/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-02-15 13:59:33
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
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' or s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9')
        {
            cout << "1\n"
                 << s[i] << "\n";
            return;
        }

    }

    for (int i = 0; i < n; i++)
    {

        if ((s[i] == '2' || s[i] == '5') and i != 0)
        {
            cout << 2 << "\n";
            cout << s[0] << s[i] << "\n";
            return;
        }
    }
    

    bool ek2 = false, ek3 = false, ek5 = false, ek7 = false;

    for (int i = 0; i < n; i++)
    {
        if (!ek2 and s[i] == '2')
        {
            ek2 = true;
            continue;
        }
        if (!ek3 and s[i] == '3')
        {
            ek3 = true;
            continue;
        }
        if (!ek5 and s[i] == '5')
        {
            ek5 = true;
            continue;
        }
        if (!ek7 and s[i] == '7')
        {
            ek7 = true;
            continue;
        }
        if (ek2 and s[i] == '2')
        {
            cout << 2 << "\n";
            cout << 22 << "\n";
            return;
        }
        if (ek5 and s[i] == '5')
        {
            cout << 2 << "\n";
            cout << 55 << "\n";
            return;
        }
        if (ek3 and s[i] == '3')
        {
            cout << 2 << "\n";
            cout << 33 << "\n";
            return;
        }
        if (ek7 and s[i] == '7')
        {
            cout << 2 << "\n";
            cout << 77 << "\n";
            return;
        }
    }

    //27 57
    bool ek = false;
    char c;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '2' || s[i] == '5'){
            ek = true;
            c = s[i];
        }
        if(ek and s[i] == '7'){
            cout << 2 << "\n";
            cout << c << 7 << "\n";
        }
    }
    
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