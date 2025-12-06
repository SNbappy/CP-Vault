#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    if (!(cin >> n))
        return;

    // Read inputs
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    // Initial state: score is 0
    long long current_max = 0;
    long long current_min = 0;

    for (int i = 0; i < n; ++i)
    {
        // Calculate potential next scores based on the transitions
        // Option 1: Pick Red (preserve sign) -> previous max gives max, previous min gives min
        long long red_option_max = current_max - a[i];
        long long red_option_min = current_min - a[i];

        // Option 2: Pick Blue (flip sign) -> previous min gives max, previous max gives min
        long long blue_option_max = b[i] - current_min;
        long long blue_option_min = b[i] - current_max;

        // Update global max and min for this turn
        long long next_max = max(red_option_max, blue_option_max);
        long long next_min = min(red_option_min, blue_option_min);

        current_max = next_max;
        current_min = next_min;
    }

    cout << current_max << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}