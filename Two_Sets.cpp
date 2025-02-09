/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-21 19:08:40
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
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    ll x = n * (n + 1) / 2;
    if(x%2)
        no;
    else{
        yes;
        vector<ll> set1, set2;
        ll sum = 0;
        for (ll i = n; i > 0; i--)
        {
            ll y = sum + i;
            if(y<=x/2){
                set1.push_back(i);
                sum += i;
            }
            else{
                set2.push_back(i);
            }
        }
        cout << set1.size() << el;
        for (auto c: set1){
            cout << c << " ";
        }
        cout << el;
        cout << set2.size() << el;
        for(auto c: set2)
            cout << c << " ";
        cout << el;
    }
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //tst
   Beche_achi();

    Goodbye
}