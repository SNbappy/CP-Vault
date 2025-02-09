/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-12 15:12:36

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

    string s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' or s[i] == 'E' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y' or s[i] == 'a' or s[i] == 'e' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' or s[i] == 'Y')
            s[i] = '0';
    }
    vector<char> v;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            v.push_back('.');
            v.push_back(s[i]);
        }
    }
    for (auto x : v)
    {
        x = tolower(x);
        cout << x;
    }
    cout << el;
}

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}