#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[i];
            ans += (sum == k);
        }
    }
    cout << ans;
    return 0;
}