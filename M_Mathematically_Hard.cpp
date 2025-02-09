/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-12-23 19:51:05
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

const int N = 5e6 + 9;

int phi[N], spf[N];
long long pref_sum[N];

void Beche_achi()
{
    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        int x = i, res = 1;
        while (x > 1)
        {
            int p = spf[x], e = 0, pw = 1;
            while (x % p == 0)
            {
                e++;
                pw *= p;
                x /= p;
            }
            res *= (pw / p) * (p - 1);
        }
        phi[i] = res;
    }
    for (int i = 1; i < N; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + 1LL * phi[i] * phi[i];
    }
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << ++cs << ": " << pref_sum[b] - pref_sum[a - 1] << el;
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

    // tst
    Beche_achi();

    Goodbye
}