/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-15 06:41:52
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

    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i+=k)
    {
        for (ll j = 0; j < n; j+=k)
        {
            cout << s[i][j];
        }
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

   tst
   Beche_achi();

    Goodbye
}