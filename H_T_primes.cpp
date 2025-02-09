/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-12-23 08:58:47
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
const int N = 1e6 + 9;

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

bool is_prime[N];
void sieve()
{
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        is_prime[i] = true;
    }

    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j < N; j+= i)
            {
                is_prime[j] = false;
            }
        }
    }
}

void Beche_achi()
{
    sieve();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        int p = sqrtl(x);
        while (1LL * p * p < x)
            ++p;
        while (1LL * p * p > x)
            --p;
        if (1LL * p * p == x)
        {
            if (is_prime[p])
            {
                yes;
            }
            else
                no;
        }
        else
            no;
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