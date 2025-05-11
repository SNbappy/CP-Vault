#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d%d", &x, &y);
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
             {
                 if (a.first != b.first)
                     return a.first < b.first;
                 else
                     return a.second > b.second; });
        for (auto x : v)
            printf("%d %d\n", x.first, x.second);
    }
}