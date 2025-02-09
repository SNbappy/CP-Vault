/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-04 02:57:14

*/

//************************************************************************
//************************************************************************

#include <bits/stdc++.h>
using namespace std;

// Define shorthand for frequently used constructs
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;

//************************************************************************
//************************************************************************

// Function to solve the problem
void Beche_achi()
{
    // Input the size of the array
    ll n;
    cin >> n;

    // Flag to determine if a valid subarray is found
    bool ok = false;

    // Vector to store the array elements
    vector<ll> a(n);

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Map to store the prefix sum and its frequency
    map<ll, ll> m;

    // Initialize prefix sum and set frequency of 0 to 1
    ll s = 0;
    m[0] = 1;

    // Loop through the array elements
    for (int i = 0; i < n; i++)
    {
        // If the index is even, negate the element (alternate negation)
        if (i % 2 == 0)
            a[i] = -a[i];

        // Update the prefix sum
        s += a[i];

        // Check if the current prefix sum has been encountered before
        if (m[s])
        {
            // If yes, a valid subarray is found, print "YES" and set the flag
            yes;
            ok = true;
            break;
        }

        // Update the frequency of the current prefix sum
        m[s]++;
    }

    // If no valid subarray is found, print "NO"
    if (!ok)
        no;
}

Depressed_C0der
{
    // Number of test cases
    tst
    // Call the solving function for each test case
    Beche_achi();

    // End of program
    Goodbye
}
