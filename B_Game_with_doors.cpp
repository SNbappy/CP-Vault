/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-30 08:01:28
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

/************************************************************/

void Beche_achi()
{

     ll l, r, L, R;
    cin >> l >> r >> L >> R;
    ll inter = min(r, R) - max(l, L) + 1;
    ll ans = inter - 1;
    if (inter <= 0)
    {
        ans = 1;
    }
    else
    {
        ans += (l != L);
        ans += (r != R);
    }
    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}