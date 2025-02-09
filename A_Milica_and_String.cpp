/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-01-02 22:55:03

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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='B'){
            b++;
        }
    }
    vector<int> ans, vec;
    if(b==k)
        cout << 0 << el;
    else if (b < k){
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i]=='A')
                cnt++;
                if(cnt==k-b){
                    cout << 1 << el;
                    cout << i + 1 << ' ' << "B\n";
                    break;
                }
        }
    }
    else{
        int cnt = 0;
        for (int i = 0; i < n;i++){
            if(str[i]=='B'){
                cnt++;
            }
            if(cnt==b-k){
                cout << 1 << el;
                cout << i + 1 << ' ' << "A\n";
                break;
            }
        }
    }
}

int main()
{

    tst
    solve();
    return 0;
}