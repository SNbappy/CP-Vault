#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el endl
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define ll long long

void solve()
{
    string s;
    cin >> s;

    // string b = s; // Initialize b with the original string
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            s[i] = s[s.size() - i - 1]; // Fix the index for the mirrored character
        }
        // else
        // {
        //     b[i] = s[i];
        // }
    }
    cout << s << el;
}

int main()
{
    solve();
    return 0;
}
