/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-29 23:11:41

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
    string ans;
    for (int i = s.size() - 1; i >= 0;)
    {
        if (i != s.size() - 1)
        {
            ans.push_back('.');
        }

        if (s[i] == 'a' or s[i] == 'e')
        {
            ans.push_back(s[i]);
            ans.push_back(s[i - 1]);
            i = i - 2;
        }
        else
        {
            ans.push_back(s[i]);
            ans.push_back(s[i - 1]);
            ans.push_back(s[i - 2]);
            i = i - 3;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << el;
}

int main()
{

    tst
    solve();
    return 0;
}