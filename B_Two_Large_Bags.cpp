#include <bits/stdc++.h>
using namespace std;

#define fast_io              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define el '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> freq(n + n / 2 + 1, 0); // Frequency array for numbers up to n + n/2
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int carry = 0;
    for (int i = 1; i < freq.size(); i++)
    {
        int total = freq[i] + carry;
        if (total % 2)
        { // If total items at position `i` is odd, pairing is impossible
            cout << "NO" << el;
            return;
        }
        carry = total / 2; // Carry forward half of the elements (as pairs)
    }

    cout << "YES" << el;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
