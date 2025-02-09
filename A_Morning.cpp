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
    string n;
    cin >> n;
    ll x = 1;
    ll cnt = 4;

    ll p = stoi(n.substr(0, 1));
    if(p==0)
        p = 10;
    cnt += abs(x - p);
    x = p;

    p = stoi(n.substr(1, 1));
    if (p == 0)
        p = 10;
    cnt += abs(x - p);
    x = p;

    p = stoi(n.substr(2, 1));
    if (p == 0)
        p = 10;
    cnt += abs(x - p);
    x = p;

    p = stoi(n.substr(3, 1));
    if (p == 0)
        p = 10;
    cnt += abs(x - p);
    x = p;

    cout << cnt << el;
}

Depressed_C0der
{
    tst
    Beche_achi();

    Goodbye
}
