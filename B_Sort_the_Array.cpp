/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-03-10 00:15:20
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
    vector<ll> a(n), b(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(all(b));

    ll cnt = 0, start = -1, end = -1;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (cnt == 0)
                start = i;
            end = i;
            cnt++;
        }
    }

    if (cnt == 0)
    {
        cout << "yes" << el;
        cout << "1 1" << el;
        return;
    }

    reverse(a.begin() + start, a.begin() + end + 1);

    if (a == b)
    {
        cout << "yes" << el;
        cout << start + 1 << " " << end + 1 << el;
    }
    else
    {
        cout << "no" << el;
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