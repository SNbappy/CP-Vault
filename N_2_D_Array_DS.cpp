#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> a(6, vector<int>(6));
    for (int i = 0; i < 6; ++i)
        for (int j = 0; j < 6; ++j)
            cin >> a[i][j];
    int ans = -63;
    for (int i = 0; i <= 3; ++i)
    {
        for (int j = 0; j <= 3; ++j)
        {
            int sum = 0;
            sum += a[i][j] + a[i][j + 1] + a[i][j + 2];
            sum += a[i + 1][j + 1];
            sum += a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
}