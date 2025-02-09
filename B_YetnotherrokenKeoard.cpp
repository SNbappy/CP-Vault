/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-01 00:22:04

E-mail: bappy.just@gmail.com

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

void solve()
{

    map<ll, char> ma;
    ll n, ind;
    string s;
    cin >> s;
    n = (ll)s.size();
    stack<ll> upper, lower;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (!(upper.empty()))
            {
                ind = upper.top();
                ma[ind] = '$';
                upper.pop();
            }
            continue;
        }
        if (s[i] == 'b')
        {
            if (!(lower.empty()))
            {
                ind = lower.top();
                ma[ind] = '$';
                lower.pop();
            }
            continue;
        }
        ma[i] = s[i];
        if (isupper(s[i]))
        {
            upper.push(i);
        }
        else
        {
            lower.push(i);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (ma.count(i) and ma[i] != '$')
        {
            cout << ma[i];
        }
    }
    cout << el;
}

int main()
{

    tst
    solve();
    return 0;
}