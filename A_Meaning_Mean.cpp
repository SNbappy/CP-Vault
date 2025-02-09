#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const ll MOD = 1e9 + 7;

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];
        
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        for (ll i = 1; i < n; i++)
        {
            a[i] = (a[i] + a[i - 1]) / 2;
        }

        cout << a[n - 1] << el;
    }

    return 0;
}