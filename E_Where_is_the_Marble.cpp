/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-12-27 15:38:22
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

int numbers[10005];

void Beche_achi()
{
    // Variable T is used to keep track of the test case number
    int T = 1;

    // N represents the number of elements in the array
    // Q represents the number of queries
    int N, Q;

    // Read input until both N and Q are zero
    while (cin >> N >> Q, N || Q)
    {
        // Read the N elements into the numbers array
        for (int i = 0; i < N; ++i)
            cin >> numbers[i];

        // Sort the array in ascending order to allow efficient binary search
        sort(numbers, numbers + N);

        // Print the case number
        cout << "CASE# " << T++ << ":\n";

        // Process Q queries
        while (Q--)
        {
            int n; // The number to be searched in the array
            cin >> n;

            // Use lower_bound to find the first occurrence of n in the sorted array
            // lower_bound returns an iterator pointing to the first element >= n
            auto iter = lower_bound(numbers, numbers + N, n);

            // Check if the element was found and if it matches n
            if (iter == numbers + N || *iter != n)
                // If not found, print "not found"
                cout << n << " not found\n";
            else
                // If found, calculate its position (1-based indexing) and print
                cout << n << " found at " << (iter - numbers) + 1 << '\n';
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

    //tst
    Beche_achi();

    Goodbye
}