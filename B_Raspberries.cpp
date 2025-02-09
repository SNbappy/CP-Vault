/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-02-06 14:18:03

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

    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll cnt = 0, ans = 0;
    ll mini = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(k == 2 || k==3 || k==5){
        for (ll i = 0; i < n; i++)
        {
            if(a[i] % k == 0){
                cnt = 1;
                break;
            }
        }
        if(cnt !=1){
            for (ll i = 0; i < n; i++)
            {
                mini = min(mini, k-(a[i]%k));
            }
            ans = mini;
        }
    }
    else{
        for (ll i = 0; i < n; i++)
        {
            if(a[i] % k == 0)
            {
                cnt = -1;
                break;
            }
            else if(a[i] % 2 == 0){
                cnt++;
            }
        }
        if(cnt == -1)
            ans = 0;
        else if(cnt >=1)
            ans = max(0LL, 2 - cnt);
        else{
            cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if(a[i]%k==3){
                    cnt = 1;
                    break;
                }
            }
            if(cnt == 1)
                ans = 1;
            else
                ans = 2;
        }
    }
    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}