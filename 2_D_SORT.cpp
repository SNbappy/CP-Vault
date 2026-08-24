#include <bits/stdc++.h>
using namespace std;
#define all(n) n.begin(), n.end()
void Depressed_C0der()
{
    int n;
    scanf("%d", &n);

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        v.push_back(make_pair(x, y));
    }

    sort(all(v), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.first != b.first)
            return a.first < b.first;
        else
            return a.second > b.second;
    });

    for (auto x: v)
        printf("%d %d\n", x.first, x.second);
}

signed main()
{
    int tc;
    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}