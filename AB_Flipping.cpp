/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-04 21:13:54
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

void Beche_achi()
{
    int n;
    char s[200005];
    cin >> n;
    s[n + 1] = 'C';
    for (int i = 1; i <= n; ++i)
        cin >> s[i];
    int pt1 = 1, pt2 = 1, ans = 0;

    while (s[pt1] == 'B')
        ++pt1, ++pt2;

    while (pt1 <= n)
    {
        int cntA = 0, cntB = 0;

        while (s[pt2] == 'A')
            pt2++, cntA++;

        while (s[pt2] == 'B')
            pt2++, cntB++;

        if (s[pt2 - 1] == 'B')
            ans += pt2 - pt1 - 1;

        if (cntB)
            pt1 = pt2 - 1;
        else
            break;
    }

    cout << ans << '\n';
}

Depressed_C0der
{
    tst
    Beche_achi();
    Goodbye
}
