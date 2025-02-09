#include <bits/stdc++.h>
using namespace std;

#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define checkmate return 0;

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        for (auto &row : s)
            cin >> row;

        int ans = 0;
        for (int layer = 0; layer < n / 2; ++layer)
        {
            for (int i = 0; i < n - 2 * layer - 1; ++i)
            {
                int one = 0, zero = 0;

                // Get coordinates for the four corners
                vector<pair<int, int>> coords = {
                    {layer, layer + i},
                    {layer + i, n - 1 - layer},
                    {n - 1 - layer, n - 1 - layer - i},
                    {n - 1 - layer - i, layer}};

                // Count ones and zeros
                for (auto [x, y] : coords)
                {
                    if (s[x][y] == '1')
                        one++;
                    else
                        zero++;
                }

                // Add the minimum flips needed
                ans += min(one, zero);
            }
        }

        cout << ans << endl;
    }
    checkmate;
}
