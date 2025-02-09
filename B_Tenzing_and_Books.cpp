/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-19 05:45:01
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

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n), c(n);
    for (ll i = n - 1; i >= 0; i--)
    {
        cin >> a[i];
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        cin >> b[i];
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        cin >> c[i];
    }

    ll temp = 0;
    bool flag = false;
    while (true)
    {
        ll cnt = 0;
        if (a.size())
        {
            if (x | a[a.size() - 1] == x)
            {
                temp = (temp | a[a.size() - 1]);
                a.pop_back();
                if (temp == x)
                {
                    flag = true;
                    break;
                }
                cnt++;
            }
        }
        if (b.size())
        {
            if (x | b[b.size() - 1] == x)
            {
                temp = (temp | b[b.size() - 1]);
                b.pop_back();
                if (temp == x)
                {
                    flag = true;
                    break;
                }
                cnt++;
            }
        }
        if (c.size())
        {
            if (x | c[c.size() - 1] == x)
            {
                temp = (temp | c[c.size() - 1]);
                c.pop_back();
                if (temp == x)
                {
                    flag = true;
                    break;
                }
                cnt++;
            }
        }
        if (cnt == 0)
            break;
    }
    if (x == 0)
        flag = true;
    if (flag == true)
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