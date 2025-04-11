/**
 *    author:  tourist
 *    created: 05.04.2025 07:37:56
 **/

#include <bits/stdc++.h>
using namespace std;

// Debug macro for local testing (ignored in normal compilation)
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; // number of test cases
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n; // size of arrays

        vector<int> a(n), b(n); // input arrays a and b
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // map to group indices based on (a[i], b[i]) and (b[i], a[i])
        map<pair<int, int>, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            // store original index
            mp[{a[i], b[i]}].push_back(i);
            // store negative index for reverse direction to distinguish
            mp[{b[i], a[i]}].push_back(~i);
        }

        vector<int> order(n); // final order after sorting pairs
        int l = 0, r = n;     // two pointers: left and right for filling order
        int mid = -1;         // to handle central element if needed
        bool fail = false;    // flag if configuration is invalid

        // iterate through all distinct (a, b) or (b, a) pairs
        for (auto &[x, v] : mp)
        {
            // Skip if we already handled this pair in reverse order
            if (x.first > x.second)
            {
                continue;
            }

            sort(v.begin(), v.end()); // sort the indices

            int sz = int(v.size());
            if (sz % 2 != 0)
            {
                // We need even count for symmetry
                fail = true;
                break;
            }

            // Check if the pairs can be mirrored properly
            for (int i = 0; i < sz; i++)
            {
                if ((v[i] < 0) != (i < sz / 2))
                {
                    fail = true;
                    break;
                }
            }
            if (fail)
            {
                break;
            }

            // Special case: symmetric pairs like (x, x)
            if (x.first == x.second)
            {
                int cc = sz / 2;
                if (cc % 2 == 1)
                {
                    // If odd number in one side, only one middle allowed
                    if (mid != -1)
                    {
                        fail = true;
                        break;
                    }
                    mid = v[cc++]; // take one to center
                }

                // Distribute rest to left and right
                for (int i = cc; i < sz; i++)
                {
                    if (i % 2 == 0)
                    {
                        order[l++] = ~v[i];
                    }
                    else
                    {
                        order[--r] = v[i];
                    }
                }
            }
            else
            {
                // Normal case: distribute half to left, half to right
                for (int i = 0; i < sz; i++)
                {
                    if (v[i] < 0)
                    {
                        order[l++] = ~v[i]; // reversed index
                    }
                    else
                    {
                        order[--r] = v[i]; // original index
                    }
                }
            }
        }

        if (fail)
        {
            cout << -1 << '\n';
            continue;
        }

        // If a center element exists, place it
        if (mid != -1)
        {
            assert(r - l == 1);
            order[l] = mid;
        }
        else
        {
            assert(r - l == 0);
        }

        // Calculate inverse permutation
        vector<int> inv(n); // position -> index
        for (int i = 0; i < n; i++)
        {
            inv[order[i]] = i;
        }

        // Position of each index in the current order
        vector<int> pos(n);
        for (int i = 0; i < n; i++)
        {
            pos[inv[i]] = i;
        }

        vector<pair<int, int>> ops; // store swap operations

        // Sort using minimal swaps
        for (int i = 0; i < n; i++)
        {
            if (pos[i] > i)
            {
                int x = i;
                int y = pos[i];
                ops.emplace_back(x, y);
                swap(inv[x], inv[y]); // update position
                pos[inv[x]] = x;
                pos[inv[y]] = y;
            }
        }

        // Output answer
        cout << ops.size() << '\n';
        for (auto &op : ops)
        {
            // Convert 0-based to 1-based index
            cout << op.first + 1 << " " << op.second + 1 << '\n';
        }
    }

    return 0;
}
