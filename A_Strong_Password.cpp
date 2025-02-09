/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-07 09:53:34
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
#define all(n) n.begin(),n.end()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    string s;
    cin >> s;
    vector<char> str;
    bool ok = true;
    str.push_back(s[0]);
    for (ll i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1] && ok){
            if (s[i] == 'a')
                str.push_back('b');
            else
                str.push_back('a');
            ok = false;
        }
        str.push_back(s[i]);
    }
    if(str.size() == s.size()){
            if (s[s.size() - 1] == 'a')
                str.push_back('b');
            else
                str.push_back('a');
    }
    for (auto c: str)
        cout << c;
    cout << el;
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