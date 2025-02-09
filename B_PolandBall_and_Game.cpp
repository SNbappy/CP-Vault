/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-12 07:53:44
*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n, m;
    cin >> n >> m;
    vector<string> a, b;
    bool ok = true;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (ll i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        b.push_back(s);
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cnt++;
            }
        }
    }
    ll sum1 = n - cnt;
    ll sum2 = m - cnt;
    if(cnt%2!=0)
        sum1++;
    // cout << sum1 << " " << sum2 << el;
    // cout << cnt << el;
    
        if (sum1 > sum2)
            yes;
        else
        {
            no;
        }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}