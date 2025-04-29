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
    map<int, int> cnt;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        ans += cnt[sum - k];
    }
    cout << ans;
    return 0;
}