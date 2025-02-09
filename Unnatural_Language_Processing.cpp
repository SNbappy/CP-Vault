/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-29 16:09:26

E-mail: bappy.just@gmail.com

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    map<int, int> m;
    m['a'] = 1;
    m['e'] = 1;
    m['i'] = 1;
    m['o'] = 1;
    m['u'] = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if(m[s[i]]){
            ans.push_back(s[i]);
            int j = i + 1;
            if(j==s.size()-1){
                // ans.push_back(s.back());
            }
            else if(j+1<=s.size()-1){
               if(m[s[j]]==0 and m[s[j+1]==0]){
                   ans.push_back(s[j]);
                   ans.push_back('.');
                   i = j;
               }
               else{
                   ans.push_back('.');
               }
            }
        }
        else
            ans.push_back(s[i]);
    }
    cout << ans << el;
}

int main()
{

    tst
    solve();
    return 0;
}