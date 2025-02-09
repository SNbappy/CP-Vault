/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-11-28 17:42:15
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define int long long
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define Depressed_C0der int32_t main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
const int MOD = 1e9 + 7;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/// change int to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

/************************************************************
 *                   Utility Function                      *
 ************************************************************/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void Beche_achi()
{
    int n;
    cin >> n;
    string s, st;
    cin >> s >> st;
    int one = 0, zero = 0;
    int j = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        one += s[i] == '1';
        zero += s[i] == '0';
        if(zero == one){
            v.push_back(make_pair(j, i));
            j = i + 1;
        }
    }
    for(auto x: v){
        int start = x.first;
        int end = x.second;
        if(s[start] == st[start]){
            continue;
        }
        else{
            for (int i = start; i <= end; i++)
            {
                s[i] = s[i] ^ 1;
            }
            
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=st[i]){
            ok = false;
            break;
        }
    }
    if(ok)
        yes;
    else
        no;
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    tst
    Beche_achi();

    Goodbye
}