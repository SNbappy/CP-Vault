/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 18:01:47
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
#define rall(n) n.rbegin(),n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
************************************************************/

void Beche_achi()
{

    char s_ab, s_ac, s_bc;
    cin >> s_ab >> s_ac >> s_bc;
    if ((s_ab == '>' && s_bc == '>') || (s_ab == '<' && s_bc == '<'))
        cout << 'B' << el;
    else if ((s_ab == '<' && s_ac == '>') || (s_ab == '>' && s_ac == '<'))
        cout << 'A' << el;
    else
    {
        cout << 'C' << el;
    }
    
}

/************************************************************
 *                      Main Function                      *
************************************************************/

Depressed_C0der
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //tst
   Beche_achi();

    Goodbye
}