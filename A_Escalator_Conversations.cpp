#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int a[n], cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] != h && abs(h - a[i]) % k == 0 && (abs(h - a[i]) / k) < m)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}