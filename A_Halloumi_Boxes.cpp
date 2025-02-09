/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-23 20:15:29

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long

void solve()
{

    int n, k,cnt=0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1])
            cnt++;
    }
    if(cnt!=0 and k==1)
        no;
    else
        yes;
}

int main()
{

    tst
    solve();
    return 0;
}