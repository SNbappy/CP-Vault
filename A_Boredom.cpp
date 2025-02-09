/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-17 12:34:17
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
ll arr[100000];
void Beche_achi()
{

    int n;
    cin >> n;
    
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        arr[x] += x;
    }
    for (int i = 2; i <= 100000; i++)
        arr[i] = max(arr[i - 1], arr[i] + arr[i - 2]);
    cout << arr[100000];
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