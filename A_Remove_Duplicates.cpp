/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-07 02:03:35

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
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v(1005,0);
    vector<ll> ans;
    for (ll i = n - 1; i >= 0; i--)
    {
        if(v[a[i]]==0){
            ans.push_back(a[i]);
            v[a[i]] = 1;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << el;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << el;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}