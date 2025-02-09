/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-01-20 21:30:22
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long
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

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/// change int to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void Beche_achi()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    map<ll, ll> mp;
    vector<ll> s;

    for (ll x : a)
    {
        mp[x]++;
        if (mp[x] == 2)
        {
            s.pb(x);
        }
    }

    if (s.empty())
    {
        cout << "-1\n";
        return;
    }

    if (s.size() > 1)
    {
        cout << s[0] << " " << s[0] << " "
             << s[1] << " " << s[1] << "\n";
        return;
    }

    ll p = s[0];

    vector<ll> sr;
    ll cnt = 2;
    for (ll x : a)
    {
        if (x == p && cnt > 0)
        {
            cnt--;
            continue;
        }
        sr.push_back(x);
    }

    bool ok = false;
    for (ll i = 0; i < sr.size() - 1; i++)
    {
        if (sr[i + 1] < sr[i] + 2 * p)
        {
            cout << p << " " << p << " "
                 << sr[i] << " " << sr[i + 1] << "\n";
            return;
        }
    }

    cout << -1 << el;
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