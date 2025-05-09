#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int ans = 0;

    while (pq.size() >= 2 && pq.top() < k)
    {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        int combined = first + 2 * second;
        pq.push(combined);
        ans++;
    }

    if (!pq.empty() && pq.top() >= k)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}
