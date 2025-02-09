/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-03 01:08:51

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

    int n;
    cin >> n;
    int a[n];
    int cst = 0, bcp = 0, bck = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i % 3 == 1)
            cst+=a[i];
            else if(i%3==2)
                bcp+=a[i];
                else
                    bck+=a[i];
    }
    if(cst>bcp and cst>bck)
        cout << "chest" << el;
        else if(bcp>cst and bcp>bck)
            cout << "biceps" << el;
            else
                cout << "back" << el;
}

int main()
{

    //tst
    solve();
    return 0;
}