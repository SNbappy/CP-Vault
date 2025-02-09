/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-21 10:34:24

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

    ll n;
    cin >> n;
    for (int x = 1; x <= 20; x++)
    {
        for (int y = 1; y <= 20; y++)
        {
            if (x + y >= n || x == y)
                continue;
            int z = n - x - y;
            if (z == x || z == y)
                continue;
            if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0)
            {
                continue;
            }
            puts("YES");
            cout << x << ' ' << y << ' ' << z << endl;
            return;
        }
    }
    puts("NO");
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}