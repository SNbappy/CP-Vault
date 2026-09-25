/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-25 23:42:34
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

const int N = 50;
bool vis[N][N];
int n, m, visitCnt;
string s[N];

int di[] = {+1, 0, -1, 0};
int dj[] = {0, +1, 0, -1};

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < m;
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    visitCnt++;
    for (int k = 0; k < 4; k++)
    {
        int nxt_i = i + di[k];
        int nxt_j = j + dj[k];
        if (is_valid(nxt_i, nxt_j) and s[nxt_i][nxt_j] == '.' and !vis[nxt_i][nxt_j])
            dfs(nxt_i, nxt_j);
    }
}

void Depressed_C0der()
{
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    visitCnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '@')
            {
                dfs(i, j);
                break;
            }
        }
    }

    cout << visitCnt << "\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            vis[i][j] = false;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}