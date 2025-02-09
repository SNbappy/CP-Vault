/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-21 17:50:05
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

/************************************************************/

void Beche_achi()
{

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = LLONG_MAX;
    if (k != 4)
    {
        for (ll i = 0; i < n; i++)
        {
            ll x = a[i] % k;
            {
                if(x==0)
                    ans = 0;
            }
            ans = min(ans, k - x);
        }
        cout << ans << el;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 4 == 0)
            {
                cout << 0 << el;
                return;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ll x = a[i] % k;
            {
                if (x == 0)
                    ans = 0;
            }
            ans = min(ans, k - x);
        }

        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cnt++;
            }
        }
        if(cnt>=2)
        {
            cout << 0 << el;
        }
        else if(cnt==1){
            cout << 1 << el;
        }
        else
        {
            ans = min(ans, 2LL);
            cout << ans << el;
        }
        
    }
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}