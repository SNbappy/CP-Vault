/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-24 20:40:11

E-mail: bappy.just@gmail.com

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long

void solve()
{

    ll n,k;
    cin >> n;
    vector<ll> a(n);
    ll max = a[0];
    ll cnt = 0, cpt = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
        if(a[i]<0){
            cnt++;
        }
        if(a[i]==0)
            cpt++;
        if (a[i] > max)
            max = a[i];
        k = i;
    }
    if(cpt!=0)
        cout << 0 << el;
    else if (cnt == 0)
    {
        cout << 1 << el;
        cout << 1 << " " << 0 << el;
    }
    else if(cnt%2==0){
        cout << 1 << el;
        cout << 1 << " " << 0 << el;
    }
    else{
        cout << 0 << el;
    }
}

int main()
{

    tst
    solve();
    return 0;
}