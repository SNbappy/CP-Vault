/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-03 03:59:38

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

    int n;
    cin >> n;
    int matrix[n][n];
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int p = 1073741823;
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            if(i==j)
                continue;
            p &= matrix[i][j];
        }
        ans.push_back(p);
    }
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                if(matrix[i][j]!=(ans[i]|ans[j])){
                    no;
                    ok = true;
                    break;
                }
            }
        }
        if(ok)
            break;
    }
    if(!ok){
        yes;
        for(auto it: ans){
            cout << it << " ";
        }
        cout << el;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}