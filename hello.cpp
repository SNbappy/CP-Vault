#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    string s;
    cin >> s;

    int ModVal;
    cin >> ModVal;
    
    int cnt = 19;
    for (int i = 1; cnt--; i *= 10)
    {
        cout << i % ModVal << " ";
    }
    return 0;
}