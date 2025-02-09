/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-28 23:34:27

E-mail: bappy.just@gmail.com

*/

#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
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

    int n;
    cin >> n;
    boost::multiprecision::cpp_int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = (fact * i);
    }
    cout << fact << el;
}

int main()
{

    tst
    solve();
    return 0;
}