/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2025-09-24 18:28:58
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()

#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

const int N = 1e6+9;
bool isPrime[N];

void sieve(){
    isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        isPrime[i] = true;
    }
    
    for (int i = 2; i < N; i++)
    {
        if(isPrime[i]){
            for (int j = i+i; j < N; j+=i)
            {
                isPrime[j] = false;
            }            
        }
    }
    
}


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int y = sqrtl(x);
        if(y * y == x and isPrime[y])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}