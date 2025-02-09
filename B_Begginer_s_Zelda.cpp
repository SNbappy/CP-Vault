/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-31 19:21:26

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
    ll nodes, cnt = 0, a, b;
    cin >> nodes;
    map<ll, ll> ma;
    for (ll i = 0; i < nodes-1; i++)
    {
        cin >> a >> b;
        ma[a]++;
        ma[b]++;
    }
    for(auto it: ma){
        if(it.second==1)
            cnt++;
    }
    cnt = cnt / 2 + cnt % 2;
    cout << cnt << el;
}

int main()
{

    tst
    solve();
    return 0;
}