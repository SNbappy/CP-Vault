#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];   
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int mn = a[0];
        int mx = a[n - 1];
        cout << (mx - mn) * (n - 1) << endl;
    }



    return 0;
}