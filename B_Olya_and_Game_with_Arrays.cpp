/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-24 06:40:58
*/

#include <bits/stdc++.h>
using namespace std;

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
#define all(n) n.begin(), n.end()  
#define pb push_back               

/************************************************************/

/*
    Function: Beche_achi
    Purpose: To process multiple arrays and calculate a specific result based on the values
             in those arrays.
*/
void Beche_achi()
{
    int n; // Number of arrays to be processed
    cin >> n;
    vector<vector<int>> a(n);                     
    long long total = 0;                          
    int minVal = INT_MAX, secondMinVal = INT_MAX; 

    // Loop through each array
    for (auto &row : a)
    {
        int m; // Number of elements in the current array
        cin >> m;
        row.resize(m); // Resize the vector to hold 'm' elements

        // Read 'm' elements into the current row vector
        for (int &x : row)
            cin >> x;

        // Sort the row to easily find the smallest and second smallest elements
        sort(all(row));

        // Resize the row to keep only the two smallest elements
        row.resize(2);

        // Add the second smallest element to the total
        total += row[1];

        // Update the minimum values
        minVal = min(minVal, row[0]);
        secondMinVal = min(secondMinVal, row[1]);
    }

    // Adjust the total by adding the smallest value and subtracting the second smallest
    total += minVal - secondMinVal;

    // Output the final total
    cout << total << el;
}

Depressed_C0der // Start of the main function
{
    tst           // Loop over the number of test cases
    Beche_achi(); // Call the function for each test case

    Goodbye // End the main function
}
