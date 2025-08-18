#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                cnt++;
            }
        }
    }
    cout << "Array is sorted in " << cnt << " swaps." << el;
    cout << "First Element: " << a[0] << el;
    cout << "Last Element: " << a[n - 1] << el;
    return 0;
}