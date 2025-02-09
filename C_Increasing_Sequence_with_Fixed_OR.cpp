/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 06:09:57
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
    vector<ll> bits;
    for (ll i = 0; i < 62; i++)
    {
        if (n & (1LL << i))
        {
            bits.push_back(i);
        }
    }
    ll k = bits.size();
    if (k == 1)
    {
        cout << 1 << el;
        cout << n << el;
    }
    else
    {
        cout << k + 1 << el;
        for (int i = k - 1; i >= 0; i--)
        {
            cout << n - (1LL << bits[i]) << " ";
        }
        cout << n << el;
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

   tst
   Beche_achi();

    Goodbye
}