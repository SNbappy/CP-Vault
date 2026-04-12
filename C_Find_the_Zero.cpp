#include<bits/stdc++.h>
using namespace std;
int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;

    int res;
    cin >> res;
    return res;
}
void solve() {
    int n;
    cin >> n;

    for (int i = 3; i <= 2 * n; i += 2) {
        if (ask(i, i + 1) == 1) {
            cout << "! " << i << endl;
            return;
        }
    }

    if (ask(1, 3) or ask(1, 4)) {
        cout << "! " << 1 << endl;
    } else  {
        cout << "! " << 2 << endl;
    }
}
int main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}