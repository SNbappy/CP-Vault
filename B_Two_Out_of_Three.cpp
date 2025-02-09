/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-17 02:25:59

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
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
        cin >> vec[i];
    map<ll, ll> mp;
    for (auto it: vec){
        mp[it]++;
    }
    vector<ll> s;
    for(auto it: mp){
        if(it.second>=2){
            s.push_back(it.first);
        }
    }
    if(s.size()<2){
        cout << -1 << el;
    }
    else{
        vector<ll> b;
        bool ok1 = false, ok2 = false;
        for(auto it: vec){
            if(it==s[0]){
                b.push_back(ok1 ? 2 : 1);
                ok1 = true;
            }
            else if(it==s[1]){
                b.push_back(ok2 ? 3 : 1);
                ok2 = true;
            }
            else
                b.push_back(1);
        }
        for(auto it: b){
            if(it>0)
                cout << it << " ";
        }
        cout << el;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}