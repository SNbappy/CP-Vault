#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

void Beche_achi()
{
    ll n;
    cin >> n;
    vector<ll> x(n), p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<pair<ll, ll>> b;
    for (ll i = 0; i < n; i++)
    {
        b.push_back(make_pair(x[i], p[i]));
    }
    sort(b.begin(), b.end());

    // Create prefix sum array
    vector<ll> prefix_sum(n);
    prefix_sum[0] = b[0].second; // Start with the first element's value
    for (ll i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + b[i].second;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll sam, jam;
        cin >> sam >> jam;

        // Find the range [sam, jam] using binary search
        auto start = lower_bound(b.begin(), b.end(), make_pair(sam, 0LL)) - b.begin();
        auto end = upper_bound(b.begin(), b.end(), make_pair(jam, LLONG_MAX)) - b.begin() - 1;

        ll sum = 0;
        if (start <= end)
        {
            // Use the prefix sum to calculate the range sum in O(1)
            sum = prefix_sum[end];
            if (start > 0)
                sum -= prefix_sum[start - 1];
        }

        cout << sum << el;
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Beche_achi();

    Goodbye
}
