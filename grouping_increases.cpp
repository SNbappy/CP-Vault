/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-06 22:39:40

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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int lastA = n + 2, lastB = n + 2;
    for (int i = 0; i < n; i++)
    {
        if (lastA > lastB)
            swap(lastA, lastB);
        if (a[i] <= lastA)
        {
            lastA = a[i];
        }
        else if (a[i] <= lastB)
        {
            lastB = a[i];
        }
        else
        {
            lastA = a[i];
            ans++;
        }
    }
    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}