/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-20 21:46:35
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
#define ll int
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

bool getResponse(string &s)
{
    bool res;
    cout << "? " << s << el;
    cout.flush();
    cin >> res;
    return res;
}

void Beche_achi()
{

    ll n;
    cin >> n;
    string s = "0";
    bool res = getResponse(s);
    if (!res)
        s = "1";
    while (s.size() < n)
    {
        s += '0';
        res = getResponse(s);
        if (!res)
        {
            s.pop_back();
            s += '1';
            res = getResponse(s);
            if (!res)
            {
                s.pop_back();
                break;
            }
        }
    }
    while (s.size() < n)
    {
        s = '0' + s;
        res = getResponse(s);
        if (!res)
        {
            s = s.substr(1);
            s = '1' + s;
        }
    }
    cout << "! " << s << el;
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