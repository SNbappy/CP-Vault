/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-29 10:29:49
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

/************************************************************/

void Beche_achi()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    int ans = 0, dist = -1e9;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
        {
            dist = 0;
        }
        if (s[i] == c)
        {
            ans = max(ans, dist);
        }
        dist++;
    }
    cout << ans << endl;
}


Depressed_C0der
{
    tst
    Beche_achi();
    Goodbye
}