/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-24 21:15:29

E-mail: bappy.just@gmail.com

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    int ans = 0;
    for (auto it : s)
    {
        st.insert(it);
        ans += st.size();
    }
    cout << ans << el;
}

int main()
{

    tst
    solve();
    return 0;
}