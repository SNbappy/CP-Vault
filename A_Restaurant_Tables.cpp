/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-05 03:40:03

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

    ll n, a, b;
    cin >> n >> a >> b;
    ll one = a, from_two = 0, two = b, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (v == 1)
        {
            if (one)
            {
                one--;
            }
            else if (two)
            {
                two--;
                from_two++;
            }
            else if (from_two)
            {
                from_two--;
            }
            else
            {
                ans++;
            }
        }
        else
        {
            if (two)
            {
                two--;
            }
            else
                ans += 2;
        }
    }
    cout << ans << el;
}

Depressed_C0der
{

    //tst
    Beche_achi();

    Goodbye
}