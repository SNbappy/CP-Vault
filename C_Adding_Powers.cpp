/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-10 14:46:41
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst \
    int t; \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> alli;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0){
            continue;
        }
        while(a[i] > 1){
            int cnt = 1;
            int p = 1;
            while (a[i] >= p * k)
            {
                cnt++;
                p *= k;
            }
            a[i] -= p;
            alli.push_back(cnt);
        }
        if(a[i] == 1){
            alli.push_back(1);
        }
    }
    int sz = alli.size();
    sort(alli.begin(), alli.end());
    alli.resize(unique(alli.begin(), alli.end()) - alli.begin());
    if(alli.size() != sz){
        no;
    }
    else
        yes;
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