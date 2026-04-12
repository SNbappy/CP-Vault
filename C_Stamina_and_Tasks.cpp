/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-04-12
*/

#include <bits/stdc++.h>
using namespace std;

// redefine int as long long (not really needed here, but kept as your template)
#define int long long

// some useful macros (template style)
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
#define sz(x) (int)x.size()

/*
Core Idea:
-----------
We process tasks from back to front using DP.

Let:
    next = dp[i+1]
    (i.e., best score from next tasks assuming stamina = 1)

At each task i, we have 2 choices:
    1. Skip → score = next
    2. Take → score = c[i] + (1 - p[i]/100) * next

We take the maximum of these two.

Finally, dp[1] is stored in 'next'.
*/

void Depressed_C0der()
{
    int n;
    cin >> n;

    // c[i] = value of task i
    // p[i] = percentage stamina reduction
    vector<double> c(n), p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i] >> p[i];
    }

    /*
    next represents dp[i+1]
    Initially, dp[n+1] = 0 (no tasks left → no points)
    */
    double next = 0.0;

    /*
    Traverse from last task to first
    Because dp[i] depends on dp[i+1]
    */
    for (int i = n - 1; i >= 0; i--)
    {
        // Option 1: Skip this task
        double skip = next;

        // Option 2: Take this task
        // Gain immediate reward: c[i]
        // Future reward is reduced by factor (1 - p[i]/100)
        double take = c[i] + (1.0 - p[i] / 100.0) * next;

        // Choose the best option
        next = max(skip, take);
    }

    /*
    After loop:
    next = dp[1] → maximum possible score
    */
    cout << fixed << setprecision(10) << next << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc; // number of test cases

    while (tc--)
    {
        Depressed_C0der();
    }

    return 0;
}