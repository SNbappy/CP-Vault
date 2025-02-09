/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-20 07:19:44
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
#define rall(n) n.rbegin(), n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{

    string s;
    cin >> s;
    ll max1 = 0;
    ll cnt = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cnt++;
            max1 = max(cnt, max1);
        }
        else
        {
            cnt = 0;
        }
    }
    if(s.size() == cnt){
        cout << cnt * cnt << el;
        return;
    }
    cnt = 0;
    if (s[0] == '1' and s[s.size() - 1] == '1' and s.size()>2)
    {
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
            else
                break;
        }
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                cnt++;
            else
                break;
        }
    }

    max1 = max(cnt, max1);
    if(max1 == s.size()){
        cout << max1 * max1 << el;
        return;
    }
    if(max1 > 2)
    {
        ll size = max1, ans = 0, l = 2;
        while(size>0){
            size--;
            // cout << size * l << " ";
            ll p = size * l;
            ans = max(ans, p);
            l++;
        }
        cout << ans << el;
    }
    else
    {
        cout << max1 << el;
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

    tst
    Beche_achi();

    Goodbye
}