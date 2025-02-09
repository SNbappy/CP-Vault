/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-10 22:55:00

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
    char g[8][8];
    vector<int> r;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> g[i][j];
            if (g[i][j] == 'R')
            {
                r.push_back(i);
            }
        }
    }
    for (int i : r)
    {
        bool ok = true;
        for (int j = 0; j < 8; j++)
        {
            if (g[i][j] != 'R')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "R\n";
            return;
        }
    }
    cout << "B\n";
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}