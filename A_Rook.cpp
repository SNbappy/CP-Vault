/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-30 05:47:05

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

    string s;
    cin >> s;
    string ans;
    ans.push_back(s[1]);
    int k = stoi(ans);
    for (int i = 1; i <= 8; i++)
    {
        if(i==k) 
        continue;
        cout << s[0] << i << el;
    }
    for (char i = 'a'; i <= 'h'; i++)
    {
        if(i==s[0]) continue;
        cout << i << s[1] << el;
    }
}

int main()
{

    tst
    solve();
    return 0;
}