/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-09-12 08:54:06
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

    int a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b); // ensure a <= b

    // If b >= 2 * a, the maximum number of moves is just a
    if (b >= 2 * a)
    {
        cout << a << el;
    }
    else
    {
        // Otherwise, the answer is (a + b) / 3
        cout << (a + b) / 3 << el;
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst
    Beche_achi();

    Goodbye
}