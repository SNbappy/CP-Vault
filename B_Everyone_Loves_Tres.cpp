/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-28 05:37:11
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst \
    int t; \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    int n;
    cin >> n;
    if(n == 1 || n == 3){
        cout << -1 << el;
        return;
    }
    if(n % 2 == 0){
        string s = string(n, '3');
        s[n - 1] = '6';
        s[n - 2] = '6';
        cout << s << el;
        return;
    }
    string s = string(n, '3');
    s[n - 1] = '6';
    s[n - 2] = '6';
    s[n - 4] = '6';
    cout << s << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}