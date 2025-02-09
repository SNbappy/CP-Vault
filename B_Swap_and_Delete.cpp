/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-31 02:44:30

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
    ll ans = 0;
    ll n = (ll)s.size();
    ll a[2] = {0, 0};
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - '0']++;
    }
    for (ll i = 0; i < n; i++)
    {
        if(a[!(s[i]-'0')]>0){
            a[!(s[i] - '0')]--;
        }
        else{
            ans = n - i;
            break;
        }
    }
    cout << ans << el;
}

int main()
{

    tst
    solve();
    return 0;
}