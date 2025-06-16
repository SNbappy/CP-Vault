#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to check whether all holes can be covered
// using <= k strips of length L
bool can_cover(const vector<ll> &x, int n, int k, ll L)
{
    int used = 0; // number of strips used so far
    int i = 0;    // current hole index to be covered
    while (i < n)
    {
        used++;                      // use one more strip
        ll cover_end = x[i] + L - 1; // this strip will cover from x[i] to x[i] + L - 1

        // Move 'i' to the first hole that is NOT covered by the current strip
        while (i < n && x[i] <= cover_end)
        {
            i++;
        }

        // If we've used more than k strips, it's not possible with this length
        if (used > k)
            return false;
    }

    // If we managed to cover all holes using <= k strips, it's valid
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // number of test cases

    while (T--)
    {
        int n, k;
        cin >> n >> k; // number of holes and number of strips allowed

        vector<ll> x(n); // positions of holes
        for (int i = 0; i < n; i++)
        {
            cin >> x[i]; // hole positions are already sorted as per problem
        }

        // Binary search to find the minimum valid strip length L
        ll low = 1;                    // minimum possible length
        ll high = x[n - 1] - x[0] + 1; // maximum needed length (to cover all with 1 strip)

        // Perform binary search to find the smallest L that can cover all holes using <= k strips
        while (low < high)
        {
            ll mid = low + (high - low) / 2; // candidate strip length

            // Check if it's possible to cover with this length
            if (can_cover(x, n, k, mid))
            {
                high = mid; // try smaller length
            }
            else
            {
                low = mid + 1; // need longer strips
            }
        }

        // 'low' is now the smallest strip length that works
        cout << low << "\n";
    }

    return 0;
}
