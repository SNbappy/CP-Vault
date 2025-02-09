/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-05 09:04:54
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
    vector<ll> a(n);
    ll one = 0, two = 0, three = 0, four = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            one++;
        if (a[i] == 2)
            two++;
        if (a[i] == 3)
            three++;
        if (a[i] == 4)
            four++;
    }
    ll cnt = 0;
    cnt += three + four;
    if (three < one)
        one = one - three;
    else
        one = 0;
    if (two > 1)
        cnt += (two + 1) / 2;
    else
    {
        cnt += two;
    }

    if (two % 2 == 1 and one != 0)
        one -= 2;
    cnt += (one + 3) / 4;
    cout << cnt << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}