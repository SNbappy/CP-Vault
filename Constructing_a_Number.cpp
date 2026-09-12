#include <bits/stdc++.h>
using namespace std;

void Depressed_C0der()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while(x) {
            sum += x % 10;
            x /= 10;
        }
    }

    if (sum % 3 == 0)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
} 

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}