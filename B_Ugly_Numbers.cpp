/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-12-09 08:39:38
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define int long long
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
const int MAX = 1e18;

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
    int p1 = 1;
    vector<int> v;
    for (int i = 0; p1 < MAX; i++, p1 *= 2)
    {
        // cout << p1 << el;
        int p2 = 1;
        for (int j = 0; p1 *  p2 <= MAX; j++, p2 *= 3)
        {
            int p3 = 1;
            // cout << p2 << el;
            for (int k = 0; p1 * p2 * p3 <= MAX; k++, p3 *= 5)
            {
                // cout << p1 << "" << p2 << " " << p3 << el;
                v.pb(p1 * p2 * p3);
            }
        }
    }
    sort(all(v));
    cout << v[1500 - 1] << el;
    // for (int i = 0; i < 20; i++)
    //     cout << v[i] << " ";
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