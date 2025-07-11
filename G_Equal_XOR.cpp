#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }

        // Find numbers that appear in both halves
        set<int> first_half, second_half;
        for (int i = 0; i < n; i++)
        {
            first_half.insert(a[i]);
        }
        for (int i = n; i < 2 * n; i++)
        {
            second_half.insert(a[i]);
        }

        // Find intersection - numbers that appear in both halves
        vector<int> common;
        for (int num : first_half)
        {
            if (second_half.count(num))
            {
                common.push_back(num);
            }
        }

        // Take first k common numbers
        vector<int> l, r;
        for (int i = 0; i < k; i++)
        {
            l.push_back(common[i]);
            l.push_back(common[i]);
            r.push_back(common[i]);
            r.push_back(common[i]);
        }

        // Output
        for (int i = 0; i < l.size(); i++)
        {
            cout << l[i];
            if (i < l.size() - 1)
                cout << " ";
        }
        cout << "\n";

        for (int i = 0; i < r.size(); i++)
        {
            cout << r[i];
            if (i < r.size() - 1)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
