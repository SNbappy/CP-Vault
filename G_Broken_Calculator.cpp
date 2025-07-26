/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-07-25 21:52:36
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
    string s;
    cin >> s;

    vector<ll> v;
    vector<char> chinho;
    string st = "";

    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            v.push_back(stoll(st));
            chinho.push_back(s[i]);
            st = "";
        }
        else
            st += s[i];
    }
    v.push_back(stoll(st));

    vector<ll> vr;
    vector<char> chinhor;

    vr.push_back(v[0]);

    for (int i = 0; i < chinho.size(); i++)
    {
        if (chinho[i] == '*')
        {
            vr.back() *= v[i + 1];
        }
        else
        {
            chinhor.push_back(chinho[i]);
            vr.push_back(v[i + 1]);
        }
    }

    ll ans = vr[0];
    for (int i = 0; i < chinhor.size(); i++)
    {
        if (chinhor[i] == '+')
            ans += vr[i + 1];
        else if (chinhor[i] == '-')
            ans -= vr[i + 1];
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

    tst
    Beche_achi();

    Goodbye
}