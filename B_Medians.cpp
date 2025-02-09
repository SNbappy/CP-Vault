/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-11-09 05:49:41
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
    int n, k;
    cin >> n >> k;
    if(n==1){
        cout << 1 << el << 1 << el;
        return;
    }
    if(n!=k and k!=1){
        cout << 3 << el;
        if((n- k)&1)
        cout << 1 << " " << k << " " << k + 1 << el;
        else{
            cout << 1 << " " << k - 1 << " " << k + 2 << el;
        }
        }
        else
            cout << -1 << el;
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