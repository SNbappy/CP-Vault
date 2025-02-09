/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-05 09:21:38
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
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    double n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    double ans = LLONG_MIN;
    for (ll i = 1; i < n; i++)
    {
        double x = abs(a[i] - a[i - 1]);
        ans = max(x, ans);
    }
    ans = ans / 2;
    double first = a[0];
    ans = max(ans, first);
    double last = l - a[n - 1];
    ans = max(ans, last);

    cout << fixed << setprecision(10) << ans << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}