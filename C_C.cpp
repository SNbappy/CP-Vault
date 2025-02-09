/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-31 16:03:25
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

    map<char, vector<int>> pos;

    for (int i = 0; i < n; i++)
    {
        pos[s[i]].push_back(i);
    }

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        int last_pos = -1;
        bool f = true;
        int sz = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (!f)
                break;
            auto it = upper_bound(pos[s[j]].begin(), pos[s[j]].end(), last_pos);
            if (it == pos[s[j]].end())
                break;
            ++sz;
            last_pos = *it;
        }

        if (sz == s.size())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{

    // tst
    Beche_achi();

    Goodbye
}