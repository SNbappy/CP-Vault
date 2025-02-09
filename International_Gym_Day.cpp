/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-18 15:28:48
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
#define rall(n) n.rbegin(), n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    ll d, x, y;
    cin >> d >> x >> y;
    ll ans = 0, cnt = 1;

    if (y >= x)
    {
        cout << 0 << el;
    }
    else
    {
        while (y > 0)
        {
            y--;
            ll p = x - (x * d * cnt) / 100;
            if (y >= p)
            {
                ans = cnt;
                break;
            }
            cnt++;
        }

        if (ans == 0)
        {
            cout << -1 << el;
        }
        else
        {
            cout << ans << el;
        }
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}
