/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-05 19:37:37

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

    int x, n;
    cin >> x >> n;
    int p = 0;
    for (int i = 1; i * i <= x; i++)
    {

        if (x % i == 0 && x / i >= n)
            p = max(p, i);

        if (x % i == 0 && i >= n)
            p = max(p, x / i);
    }

    cout << p << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}