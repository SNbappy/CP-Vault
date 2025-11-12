/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-11-09 11:09:04
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Solve() {
    int n;
    cin >> n;
    string s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        istringstream iss(s);
        if(s.empty()){
            i--;
            continue;
        }
        vector<string> word;
        string w;
        while(iss >> w){
            word.push_back(w);
        }
        if(word.size()==4 && word[0] == "Set" && word[2] == "to" && word[3] == "answer"){
            ans += word[1].size();
        }
    }
    cout << ans << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++) {
        // Cout << \"Case \" << i << \": \";
        Solve();
    }
    return 0;
}