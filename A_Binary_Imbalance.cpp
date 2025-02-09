/*
coded by: Depressed_C0der

date: 2023-12-23 19:31:00

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
#define ll long long

void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='0')
            cnt++;
    }
    if(cnt!=0)  yes
    else no
}

int main()
{
    tst solve();
    return 0;
}