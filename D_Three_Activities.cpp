/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-09 20:26:49
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n), b(n), c(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(make_pair(x, i));
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(make_pair(x, i));
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c.push_back(make_pair(x, i));
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        int ans = INT_MIN;

        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if(a[i].second!=b[j].second && b[j].second!=c[k].second && c[k].second!=a[i].second){
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
                
            }
            
        }
        cout << ans << el;
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