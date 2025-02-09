/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-03 15:37:41
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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int id = 0;
    while (id < n && s[id] == '1')
    {
        id++;
    }
    if (id == n)
    {
        if (n == 4)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        if ((id - 1) * (id - 1) == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}


/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}