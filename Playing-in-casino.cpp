#include <bits/stdc++.h> // Includes all the standard C++ libraries

using namespace std;

#define int long long int // Using long long int as int to handle large numbers

signed main()
{
    ios_base::sync_with_stdio(false); // Disables synchronization with C stdio for faster I/O
    cin.tie(NULL);                    // Unties cin from cout to improve input speed (useful in competitive programming)

    int t;    // Variable to store the number of test cases
    cin >> t; // Input the number of test cases

    // Process each test case
    while (t--)
    {
        int n, m;      // 'n' is the number of rows, 'm' is the number of columns
        cin >> n >> m; // Input values for n and m

        vector<int> v[m]; // Create an array of vectors of size 'm'. Each vector will store a column of values

        // Input the matrix in column-major order
        for (int i = 0; i < n; i++) // Loop over rows
        {
            for (int j = 0; j < m; j++) // Loop over columns
            {
                int x;             // Temporary variable to store input values
                cin >> x;          // Input the matrix element
                v[j].push_back(x); // Store the element in the j-th column (transposing the matrix)
            }
        }

        // Sort each column in ascending order
        for (int i = 0; i < m; i++)
        {
            sort(v[i].begin(), v[i].end()); // Sort the i-th column
        }

        int ans = 0; // Variable to store the final result

        // Process each column individually to calculate the required sum
        for (int i = 0; i < m; i++)
        {
            vector<int> res(n, 0); // Initialize a result vector 'res' of size 'n' with all 0s

            // Fill the result vector by calculating the cumulative sum of the sorted column values from bottom to top
            res[n - 1] = v[i][n - 1];        // Set the last element of 'res' to the last element of the column
            for (int j = n - 2; j >= 0; j--) // Loop from second-last element to the first
            {
                res[j] = res[j + 1] + v[i][j]; // Add the current element to the cumulative sum from below
            }

            // Calculate the contribution of each element in the column to the final result
            for (int j = 0; j < n - 1; j++) // Loop through the first n-1 elements of the column
            {
                int cnt = res[j + 1] - (n - 1 - j) * v[i][j];
                // 'res[j + 1]' gives the cumulative sum of elements below the current one
                // '(n - 1 - j) * v[i][j]' is the weighted value of the current element
                // The difference gives the total contribution of the current element to the final answer

                ans += cnt; // Add the contribution to the final result
            }
        }

        cout << ans << endl; // Output the final result for this test case
    }
}
