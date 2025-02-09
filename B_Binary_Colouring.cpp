/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-12 20:56:12
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
    ll x;
    cin >> x;
    vector<ll> v(32);
    for (ll i = 29; i >= 0; i--)
    {
        v[i] = (x >= (1 << i));
        x %= (1 << i);
    }
    
    for (ll i = 0, j; i < 32;)
    {
        /* code */
        if(!v[i]){
            i++;
            continue;
        }
        j = i + 1;
        while(v[j]){
            v[j] = 0;
            j++;
        }
        if(j > i + 1){
            v[j] = 1;
            v[i] = -1;
        }
        i = j;
    }
    cout << 32 << el;
    for(auto c: v){
        cout << c << " ";
    }
    cout << el;
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   tst
   Beche_achi();

    Goodbye
}