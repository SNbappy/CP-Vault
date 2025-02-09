/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-27 12:55:03

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

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> m2;

    for (auto &x : v)
    {
        cin >> x;
    }
    vector<int> temp = v;
    sort(temp.begin(), temp.end());

    map<int, set<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[i % k].insert(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        auto check = m[i % k];
        if (check.find(temp[i]) == check.end())
        {
            m2[i % k]++;
        }
    }
    if (m2.size() == 0)
    {
        cout << "0" << endl;
        return;
    }

    int count = 0;
    for (auto x : m2)
    {
        if (x.second == 1)
        {
            count++;
        }
        else
        {
            count += 100;
        }
    }
    if (count == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}