#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;

ll fact(ll a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
        return a * fact(a - 1);
}

void Beche_achi()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll p = 10 - n;
    ll depressed = fact(p) / (fact(2) * fact(p - 2)) * 6;
    cout << depressed << el;
}

Depressed_C0der
{
    tst
    Beche_achi();
    Goodbye
}
