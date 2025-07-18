/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-07-06 21:04:09
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
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Precompute prefix minimums for original array
    vector<int> prefix_min(n);
    prefix_min[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_min[i] = min(prefix_min[i - 1], a[i]);
    }

    // Calculate original sum
    int original_sum = 0;
    for (int i = 0; i < n; i++)
    {
        original_sum += prefix_min[i];
    }

    int min_sum = original_sum;

    // Try setting each position j to 0
    for (int j = 1; j < n; j++)
    {
        // Calculate benefit of setting a[j] = 0
        // All positions from j onwards will have minimum 0
        int benefit = 0;
        for (int k = j; k < n; k++)
        {
            benefit += prefix_min[k];
        }

        // Try adding a[j] to each position i < j
        for (int i = 0; i < j; i++)
        {
            // Calculate cost of adding a[j] to position i
            int cost = 0;
            int current_min = (i == 0) ? a[0] + a[j] : a[0];

            for (int k = 0; k < j; k++)
            {
                if (k == i)
                {
                    current_min = min(current_min, a[i] + a[j]);
                }
                else
                {
                    current_min = min(current_min, a[k]);
                }
                cost += current_min;
            }

            int new_sum = cost; // Sum up to j-1, then 0 for rest
            min_sum = min(min_sum, new_sum);
        }
    }

    cout << min_sum << "\n";
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