/*
coded by: Depressed_C0der
date: 2023-12-22 21:16:56
*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el;
#define no cout << "NO" << el;

void solve()
{
    string s;
    cin >> s;
    int k = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            k = i;
            break;
        }
    }
    if(k!=0){
    string a, b;
    a = s.substr(0, k);
    b = s.substr(k);

    int c = stoi(a);
    int d = stoi(b);
    if (c < d)
        cout << c << " " << d << el;
    else
        cout << -1 << el;
    }
    else
        cout << -1 << el;
}