/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-02-11 21:40:26
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
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

/// Utility functions
int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

// Define the check function (Assumption: It checks divisibility by 10)
bool check(long long x)
{
    return x % 10 == 0;
}

void Beche_achi()
{
    long long x;
    cin >> x;

    if (check(x))
    {
        cout << 0 << el;
        return;
    }

    int ans = 10;
    long long num = 0;

    for (int i = 0;; i++)
    {
        num = num * 10 + 9;
        long long temp = x;

        for (int j = 0; j < 10; j++)
        {
            temp += num;
            if (check(temp))
            {
                ans = min(ans, j + 1);
            }
        }

        if (num > 1e18) // Prevent overflow
        {
            break;
        }
    }

    cout << ans << el;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    tst
    Beche_achi();

    return 0;
}
