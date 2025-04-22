/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-04-21 20:39:18
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

/// cout<<*X.find_by_order(1)<<endl; // iterator to the kotobar-th largest element
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

// int min_cost_after_one_reverse(const string &s)
// {
//     int n = s.size();
//     int runs = 1;

//     for (int i = 0; i < n - 1; ++i)
//     {
//         if (s[i] != s[i + 1])
//         {
//             runs++;
//         }
//     }

//     int base_cost = n + (runs - 1) + (s[0] == '1' ? 1 : 0);

//     int cnt01 = 0, cnt10 = 0;
//     for (int i = 0; i < n - 1; ++i)
//     {
//         if (s[i] == '0' && s[i + 1] == '1')
//             cnt01++;
//         if (s[i] == '1' && s[i + 1] == '0')
//             cnt10++;
//     }
//     int P1 = (cnt01 >= 2 || cnt10 >= 2) ? 2 : 0;

//     int P2 = 0;
//     char s1 = s[0];
//     for (int i = 0; i < n - 1; ++i)
//     {
//         int term1 = (s[i] != s[i + 1]) ? 1 : 0;
//         int term2 = (s1 != s[i + 1]) ? 1 : 0;
//         int base_switch = (s1 == '1' && s[i] == '0') ? 1 : 0;
//         P2 = max(P2, term1 - term2 + base_switch);
//     }

//     int P3 = 0;
//     char sn = s[n - 1];
//     for (int i = 0; i < n - 1; ++i)
//     {
//         int term1 = (s[i] != s[i + 1]) ? 1 : 0;
//         int term2 = (s[i] != sn) ? 1 : 0;
//         P3 = max(P3, term1 - term2);
//     }

//     int P4 = (s1 == '1' && sn == '0') ? 1 : 0;

//     int max_profit = max({0, P1, P2, P3, P4});
//     return base_cost - max_profit;
// }

void Beche_achi()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 1;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum++;
        if(s[i] != s[i + 1])
            {x++;
        sum++;}
    }

    if(x)
        sum--;
    if(s[0] == '1')
        sum++;
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