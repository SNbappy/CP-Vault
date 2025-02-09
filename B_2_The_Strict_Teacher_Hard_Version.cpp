/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-14 22:46:17
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

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;

        auto it = lower_bound(b.begin(), b.end(), a);
        int ans;
        if (it == b.begin())
        {
            ans = b[0] - 1;
        }
        else if (it == b.end())
        {
            ans = n - b[m - 1];
        }
        else
        {
            ans = (*it  + *(it - 1)) / 2 - *(it - 1);
        }
        cout << ans << el;
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