/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-06 01:00:14

*/

//************************************************************************
//************************************************************************

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

//************************************************************************
//************************************************************************

void Beche_achi()
{

    const ll mx = 1e6 + 2;
    vector<pair<ll, ll>> part1, part2;
    ll n;
    cin >> n;
    vector<bool> visited(2*n);
    vector<ll> a(2 * n);
    for (ll i = 1; i <= 2*n; i++)
    {
        cin >> a[i];
        if(visited[a[i]]==false){
            part1.push_back({a[i],i});
            visited[a[i]] = true;
        }
        else{
            part2.push_back({a[i], i});
        }
    }
    sort(part1.begin(), part1.end());
    sort(part2.begin(), part2.end());
    ll ans = 0, curr = 1;
    for (auto [x, y] : part1){
        ll now = y;
        ans += abs(curr - now);
        curr = now;
    }
    curr = 1;
    for (auto [x, y] : part2)
    {
        ll now = y;
        ans += abs(curr - now);
        curr = now;
    }
    cout << ans << el;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}