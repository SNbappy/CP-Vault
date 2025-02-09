/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-11-17 05:43:31
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

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

int findSmallestPrimeFactor(int n)
{
    if (n <= 1)
    {
        return -1; // Return -1 for numbers less than or equal to 1
    }

    // Step 1: Check divisibility by 2
    if (n % 2 == 0)
    {
        return 2;
    }

    // Step 2: Check divisibility by odd numbers
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return i;
        }
    }

    // Step 3: If no factor found, n is prime
    return n;
}

void Beche_achi()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = (s[i - 1] == '1');
    }

    vector<int> cnt(n + 1);

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j += i)
        {
            if (a[j])
                break;
            cnt[j] = i;
        }
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(a[i]))
            sum += cnt[i];
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