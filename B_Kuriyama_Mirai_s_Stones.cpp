/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-03-05 04:55:22
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long
#define tst   \
    int t;    \
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

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/// change int to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void Beche_achi()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll m;
    cin >> m;
    vector<ll> b(n);
    b = a;
    sort(all(b));

    vector<ll> prefA(n), prefB(n);
    prefA[0] = a[0];
    prefB[0] = b[0];
    for (ll i = 1; i < n; i++)
    {
        prefA[i] = a[i] + prefA[i - 1];
        prefB[i] = b[i] + prefB[i - 1];
    }

    for (ll i = 0; i < m; i++)
    {
        ll type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {

            if (l != 1)
                cout << prefA[r - 1] - prefA[l - 2] << el;
            else
                cout << prefA[r - 1] << el;
        }
        if (type == 2)
        {
            // cout << prefB[r - 1] << " " << prefB[l - 2] << el;
            if (l != 1)
                cout << prefB[r - 1] - prefB[l - 2] << el;
            else
                cout << prefB[r - 1] << el;
        }
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

    // tst
    Beche_achi();

    Goodbye
}