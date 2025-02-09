/*
coded by: Depressed_C0der

date: 2023-12-22 22:42:08

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el;
#define no cout << "NO" << el;

void solve()
{

    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a << el;
    else
        cout << b << el;
}

int main()
{
    tst solve();
    return 0;
}