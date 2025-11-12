#include<bits/stdc++.h>
using namespace std;

bool dfs(const string &s, int pos, int st, vector<int> &path)
{
    path.push_back(st);
    if (pos == s.size())
        return st == 2;
    char c = s[pos];
    if (c != '0' && c != '1')
        return false;
    int nxt[3][2] = {{0, 1}, {2, 0}, {1, 2}};
    int nxSt = nxt[st][c - '0'];
    if (dfs(s, pos + 1, nxSt, path))
        return true;
    path.pop_back();
    return false;
}

int main()
{
    string s;
    cout << "Enter a binary string: ";
    cin >> s;
    vector<int> path;
    if (dfs(s, 0, 0, path))
    {
        cout << "Accepted\nPath: ";
        for (int i = 0; i < path.size(); ++i)
        {
            cout << "q" << path[i];
            if (i < s.size())
                cout << " --" << s[i] << "--> ";
        }
        cout << "\n";
    }
    else
    {
        cout << "Rejected\n";
    }
    return 0;
}