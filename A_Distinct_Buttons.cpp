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

    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int u = 0, d = 0, l = 0, r = 0;
    // if (0 > x[0])
    // {
    //     l++;
    // }
    // if (0 < x[0])
    // {
    //     r++;
    // }
    // if (0 < y[0])
    // {
    //     u++;
    // }
    // if (0 < y[0])
    // {
    //     d++;
    // }
    for (int i = 0; i < n; i++)
    {
        if (0 > x[i])
        {
            l++;
        }
        if (0 < x[i])
        {
            r++;
        }
        if (0 < y[i])
        {
            u++;
        }
        if (0 > y[i])
        {
            d++;
        }
    }
    if (l != 0 and r != 0 and d != 0 and u != 0)
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
