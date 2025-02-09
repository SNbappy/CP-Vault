/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-05 04:53:23

*/

//************************************************************************
//************************************************************************

#include <bits/stdc++.h>
using namespace std;

// Define a macro 'tst' for easy handling of test cases
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)                    // Loop through each test case
#define el '\n'                    // Newline character
#define yes cout << "YES" << el    // Macro to print "YES" with newline
#define no cout << "NO" << el      // Macro to print "NO" with newline
#define ll long long               // Define 'll' as 'long long'
#define Depressed_C0der int main() // Define the main function as 'Depressed_C0der'
#define Goodbye return 0;          // Return 0 to indicate successful execution

//************************************************************************
//************************************************************************

// Function to solve the problem
void Beche_achi()
{
    // Constants and data structures initialization
    const ll mx = 1e6 + 2;             // Maximum value for array size
    vector<bool> visited(mx);          // Array to keep track of visited elements
    vector<pair<ll, ll>> part1, part2; // Vectors to store pairs of elements and their positions
    ll n;                              // Variable to store the size of the array
    cin >> n;                          // Input the size of the array
    vector<ll> a(2 * n + 1);           // Declare an array of size 2*n+1

    // Input the elements of the array
    for (ll i = 1; i <= 2 * n; i++)
    {
        cin >> a[i];
        // If the element is not visited, add it to part1
        if (visited[a[i]] == false)
        {
            part1.push_back({a[i], i});
            visited[a[i]] = true; // Mark the element as visited
        }
        else
        {
            part2.push_back({a[i], i}); // If the element is visited, add it to part2
        }
    }

    // Sorting the two parts based on the first element of the pair
    sort(part1.begin(), part1.end());
    sort(part2.begin(), part2.end());

    ll ans = 0, curr = 1; // Initialize variables to store the answer and current position

    // Calculate the distance traveled for elements in part1
    for (auto [x, y] : part1)
    {
        ll now = y;             // Current position of the element
        ans += abs(curr - now); // Add the absolute difference to the answer
        curr = now;             // Update current position
    }

    curr = 1; // Reset current position

    // Calculate the distance traveled for elements in part2
    for (auto [x, y] : part2)
    {
        ll now = y;             // Current position of the element
        ans += abs(curr - now); // Add the absolute difference to the answer
        curr = now;             // Update current position
    }

    cout << ans; // Output the final answer
}

Depressed_C0der
{
    // Call the solving function for each test case
    // tst

    Beche_achi();

    Goodbye // Exit the program
}
