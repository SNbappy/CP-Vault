/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-19 11:47:35

*/

//************************************************************************
//************************************************************************

#include <bits/stdc++.h>
using namespace std;

// Define macros for simplicity
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
    // Input number of elements
    ll n;
    cin >> n;

    // Input the string
    string s;
    cin >> s;

    // Initialize the answer variable
    int ans = -1;

    // Iterate over possible values of 'k'
    for (int k = 1; k < n; k++)
    {
        int a = 0, b = 0;

        // Count 'L' occurrences in the first part
        for (int i = 0; i < k; i++)
            if (s[i] == 'L')
                ++a;

        // Count 'L' occurrences in the second part
        for (int i = k; i < n; i++)
            if (s[i] == 'L')
                ++b;

        // Check if the counts are not equal, and if swapping elements at position 'k' maintains the imbalance
        if (a != b && k - a != (n - k) - b)
        {
            ans = k;
            break;
        }
    }

    // Output the answer
    cout << ans << el;
}

Depressed_C0der
{
    // Invoke the function for each test case
    // Note: 'tst' macro is used to simplify the loop structure
    tst
    {
        Beche_achi();
    }

    // Return 0 to indicate successful execution
    Goodbye
}
