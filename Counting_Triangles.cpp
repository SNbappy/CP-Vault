#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x = n * (n + 2) * (2*n + 1) / 8;
        cout << x << "\n";
    }
    return 0;
}