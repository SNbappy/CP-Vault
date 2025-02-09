/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-06 23:28:37

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
    ll day, point, lesson, lab;
    cin >> day >> point >> lesson >> lab;
    ll total_lab = (day + 6) / 7;
    ll low = 1, high = day;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = (high + low) / 2;
        ll get = mid * lesson + lab * min(2 * mid, total_lab);
        if (point <= get)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << day - ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}