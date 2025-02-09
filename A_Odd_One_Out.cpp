/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-28 22:28:25

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

    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
        cout << c;
    else if (b == c)
        cout << a;
    else
    {
        cout << b;
    }
    cout << el;
}

int main()
{

    tst
    solve();
    return 0;
}