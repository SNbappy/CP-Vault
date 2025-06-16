#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Given sorted positions x[0..n-1], can we cover all holes
// with <= k strips of length L?
bool can_cover(const vector<ll> &x, int n, int k, ll L)
{
    int used = 0;
    int i = 0;
    while (i < n)
    {
        used++;
        ll cover_end = x[i] + L - 1;
        // Skip all holes covered by this strip
        while (i < n && x[i] <= cover_end)
        {
            i++;
        }
        if (used > k)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        // Binary search on L
        ll low = 1, high = x[n - 1] - x[0] + 1;
        while (low < high)
        {
            ll mid = low + (high - low) / 2;
            if (can_cover(x, n, k, mid))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << low << "\n";
    }
    return 0;
}
