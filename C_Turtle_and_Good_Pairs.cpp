/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-28 06:15:58
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
#define pb push_back

/************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> freq(26);
    for(auto c: s){
        freq[c - 'a']++;
    }
    string g;
    while(freq!=vector<ll>(26,0)){
        for (ll i = 0; i < 26; i++)
        {
            if(freq[i]>0){
                g.pb(i + 'a');
                freq[i]--;
            }
        }
    }
    cout << g << el;
}

Depressed_C0der
{

   tst
   Beche_achi();

    Goodbye
}