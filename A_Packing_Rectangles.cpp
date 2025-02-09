/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-19 06:43:06
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst \
    int t; \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int a, b, n;

bool isfit(int mid)
{
    return (mid / a) * (mid / b) >= n;
}

void Beche_achi()
{
    cin >> a >> b >> n;
    int l = 0, r = 1;
    while (isfit(r) == false)
    {
        r *= 2;
    }
    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        if (isfit(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    if (isfit(l))
        cout << l << endl;
    else
        cout << r << endl;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //tst
    Beche_achi();

    Goodbye
}