/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-29 13:57:29

E-mail: bappy.just@gmail.com

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

void solve()
{

    int x, y, z;
    cin >> x >> y >> z;
    int k = z / (x * y * 2);
    cout << k << el;
}

int main()
{

    tst
    solve();
    return 0;
}