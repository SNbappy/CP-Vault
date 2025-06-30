/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-06-28 18:44:29
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
    string s, st;
    cin >> s >> st;
    ll n = (ll)s.size();
    ll m = (ll)st.size();
    vector<ll> left_pos(m, -1), right_pos(m, -1);
    ll j = 0;
    for (ll i = 0; i < s.size() and j < st.size(); i++)
    {
        if(s[i] == st[j]){
            left_pos[j] = i;
            j++;
        }
    }
    j = m - 1;
    for (ll i = s.size() - 1; i >= 0 and j >= 0; i--)
    {
        /* code */
        if(s[i] == st[j]){
            right_pos[j] = i;
            j--;
        }
    }
    ll ans = right_pos[0];
    ans = max(ans, n - left_pos[m - 1] - 1);
    for (ll k = 0; k < m - 1; k++)
    {
        /* code */
        ans = max(ans, right_pos[k + 1] - left_pos[k] - 1);
    }
    cout << ans << el;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // tst
    Beche_achi();

    Goodbye
}