/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-30 14:36:14

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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    int cnt = 0, cpt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            cnt++;
            cpt++;
        }
        else
        {
            maxi = max(cnt, maxi);
            cnt = 0;
        }
    }
    maxi = max(cnt, maxi);

    if (maxi > 2)
        cout << 2 << el;
    else
        cout << cpt << el;
}

int main()
{

    tst
    solve();
    return 0;
}