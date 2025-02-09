/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-01-27 18:19:16
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
    string s;
    cin >> s; // Input the binary string

    string ans;         // Variable to store the maximum lexicographical string found so far
    int n = s.size();   // Length of the input string
    int L = -1, R = -1; // Variables to store the indices of the best range (1-based)

    for (int r = 0; r < n; r++) // Iterate through each possible right boundary of the range
    {
        auto t = s; // Create a temporary copy of the string
        int i = r;  // Initialize i to the current right boundary

        // Process the range [l, r] where l decreases from r to 0
        for (int l = r; l >= 0; l--)
        {
            if (s[l] == '1') // Check if the current character is '1'
            {
                // Flip the corresponding character in the mirrored position of t
                t[n - 1 - (r - l)] ^= 1;

                // If the mirrored position becomes '1', update i to the current left boundary
                if (t[n - 1 - (r - l)] == '1')
                {
                    i = l;
                }
            }
        }

        t = s; // Reset t to the original string for the next step

        // Process the range [i, r] where l decreases from r to i
        for (int l = r; l >= i; l--)
        {
            if (s[l] == '1') // Check if the current character is '1'
            {
                // Flip the corresponding character in the mirrored position of t
                t[n - 1 - (r - l)] ^= 1;
            }
        }

        // If the resulting string t is lexicographically larger than the current answer
        if (t > ans)
        {
            ans = t; // Update the answer
            L = i;   // Update the best left boundary
            R = r;   // Update the best right boundary
        }
    }

    // Output the results: 1-based indexing for the range
    cout << 1 << " " << n << " " << L + 1 << " " << R + 1 << "\n";
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