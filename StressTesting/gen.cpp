#include <bits/stdc++.h>
#define int long long
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int gen_random(int l, int r){
    return uniform_int_distribution<int>(l, r)(rng);
}
signed main()
{
    freopen("in.txt", "w", stdout);
    int n = gen_random(1, 10);
    int k = gen_random(1, 20);

    cout << n << " " << k << endl;
    for (int i = 0; i < n; i++) {
        cout << gen_random(1, 10) << " ";
    }
        return 0;
}