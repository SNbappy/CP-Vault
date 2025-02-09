/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-11-11 05:40:16
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst   \
    int t;    \
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

void Beche_achi()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    string st = s;
    int a = 0, b = 0;
    for (int i = 0; i < 100; i++)
    {
        st += s;
    }
    bool ok = false;
    int i = 0;
    while (i < st.size()) // ensures `i` stays within bounds
    {
        if (st[i] == 'N')
            b++;
        else if (st[i] == 'E')
            a++;
        else if (st[i] == 'S')
            b--;
        else if (st[i] == 'W')
            a--;

        cout << a << " " << b << el;

        // Debug statement to track `a`, `b`, and `i` after each update
        // cout << "After " << st[i] << ": a = " << a << ", b = " << b << ", i = " << i << el;

        if (a == x && b == y) // target coordinates reached
        {
            ok = true;
            break;
        }
        i++;
    }

    // cout << a << " " << b << el;
    // cout << st << el;
    if (ok)
        yes;
    else
        no;
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