#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x] += y;
    }

    vector<pair<int, int>> result(all(mp));

    sort(all(result), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    int sum = 0;
    for (int i = 0; i < min(n, (int)result.size()); i++)
    {
        sum += result[i].second;
    }

    cout << sum << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}
