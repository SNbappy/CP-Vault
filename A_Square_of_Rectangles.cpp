/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-06-21 20:35:39
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
    ll l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    if (l1 == l2 and l2 == l3)
    {
        if (b1 + b2 + b3 == l1)
        {
            yes;
            return;
        }
    }
    if (b1 == b2 and b2 == b3)
    {
        if (l1 + l2 + l3 == b1)
        {
            yes;
            return;
        }
    }
    if(b2 + b3 == b1 and l2 == l3 and l1 + l2 == b1 || b1 + b2 == b3 and l1 == l2 and l2 + l3 == b3 || b3 + b1 == b2 and l3 == l1 and l1 + l2 == b2){
        yes;
        return;
    }
    if (l2 + l3 == l1 and b2 == b3 and b1 + b2 == l1 || l1 + l2 == l3 and b1 == b2 and b2 + b3 == l3 || l3 + l1 == l2 and b3 == b1 and b1 + b2 == l2){
        yes;
        return;
    }
    no;
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