#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.clear(); // flush memory

    map<string, int> ans;
    string prev = "";
    // getline(cin, prev);
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        if (prev == "Ask read_token and wait")
        {
            string var = "";
            int j = 4;
            while (str[j] != ' ')
            {
                var += str[j++];
            }
            ans[var]++;
        }
        prev = str;
    }
    int res = 0;
    for (auto f : ans)
    {
        res += f.first.size() * f.second;
    }
    cout << res << endl;
}