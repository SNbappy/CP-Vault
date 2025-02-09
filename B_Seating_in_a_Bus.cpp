/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-31 20:39:10
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
#define all(n) n.begin(), n.end()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    ll n;
    cin >> n;
    vector<ll> vec1(n + 1), vec2(n + 2);
    for (ll i = 1; i <= n; i++)
    {
        cin >> vec1[i];
    }
    bool ok = true;
    vec2[vec1[1]] = vec1[1];
    for (ll i = 2; i < n; i++)
    {
        vec2[vec1[i]] = vec1[i];
        if(vec2[vec1[i] - 1] > 0 || vec2[vec1[i] + 1] > 0)
            ok = true;
        else
            {
                ok = false;
                break;
            }
    }
    if(ok)
        yes;
    else
    {
        no;
    }
    
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}