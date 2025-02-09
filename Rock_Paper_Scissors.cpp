/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-29 18:34:47

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
    int winreq = n / 2 + 1;
    int pad = n - winreq;
    int index = 0;
    while(pad>0 and index<s.size()){
        ans.push_back('P');
        if (s[index] != 'R')
            pad--;
        index++;
    }
    for (; index < s.size(); index++){
        if(s[index]=='R')
            ans.push_back('P');
            if(s[index]=='P')
                ans.push_back('S');
                if(s[index]=='S')
                    ans.push_back('R');
    }
    cout << ans << el;
}

int main()
{

    tst
    solve();
    return 0;
}