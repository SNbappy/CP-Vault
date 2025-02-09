/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-07 10:00:12
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

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll repeat = 0;
    ll maxi = 0;
    ll cnt = 0;
    ll x = 0, y = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        else if (s[i] == ')')
        {
            cnt--;
        }
        else
        {
            if (cnt > 0)
            {
                s[i] = ')';
                cnt--;
            }
            else
            {
                s[i] = '(';
                cnt++;
            }
        }
    }
    set<ll> st;
    ll ans = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='('){
            st.insert(i);
        }
        else{
            ll temp = *st.rbegin();
            ans += i - temp;
            st.erase(temp);
        }
    }
    cout << ans << el;
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