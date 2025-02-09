/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-27 06:59:21
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

/************************************************************/

void Beche_achi()
{

    string n;
    cin >> n;
    int x=0;
    for (ll i = 0; i < n.size(); i++)
    {
        /* code */
        if(n[i]!='4' and n[i]!='7'){
            x = 1;
        }
    }
    if(x==0){
        yes;
    }
    else{
        int p = stoi(n);
        // 47 477 4 7 74 744 474 747
        if(p%4==0 or p%7==0 or p%47==0 or p%74==0 or p%744==0 or p%477==0 or p%474==0 or p%747==0 or p%447==0 or p%774==0)
            yes;
        else
        {
            no;
        }
        
    }
}

Depressed_C0der
{

   //tst
   Beche_achi();

    Goodbye
}