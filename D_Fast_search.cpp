/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-10-17 13:41:47
*/

#include <bits/stdc++.h>
using namespace std;

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

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;

        // Finding the lower bound manually
        int low = 0, high = n - 1, lower = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (a[mid] >= l)
            {
                lower = mid;
                high = mid - 1; // Continue searching in the left half
            }
            else
            {
                low = mid + 1; // Search in the right half
            }
        }

        // Finding the upper bound manually
        low = 0, high = n - 1;
        int upper = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (a[mid] > r)
            {
                upper = mid;
                high = mid - 1; // Continue searching in the left half
            }
            else
            {
                low = mid + 1; // Search in the right half
            }
        }

        // Output the number of elements in the range [l, r]
        cout << upper - lower << " ";
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