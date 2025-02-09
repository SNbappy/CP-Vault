/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-06 20:52:27

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

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    string demo(n, 'x');
    map<int, set<char>> ans;
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            demo[i] = c;
            ans[1].insert(c);
            c++;
        }
        else
        {
            char x = *ans[arr[i]].begin();
            ans[arr[i]].erase(x);
            demo[i] = x;
            ans[arr[i] + 1].insert(x);
        }
    }
    cout << demo << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}