/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-02-09 18:45:32
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long
#define tst \
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
  ll n, c, d;
  cin >> n >> c >> d;
  vector<ll> a(n * n);
  for (ll i = 0; i < n * n; i++)
  {
    cin >> a[i];
  }
  sort(all(a));
  vector<ll> temp;
  temp.pb(a[0]);
  vector<ll> x;
  x.pb(temp[0] + c);
  for (ll i = 2; i < n; i++)
  {
    x.pb(x.back() + c);
  }
  for (ll i = 1; i < n; i++)
  {
    temp.pb(temp[i - 1] + d);
    x.pb(temp[i] + c);
    for (ll j = 2; j < n; j++)
    {
      x.pb(x.back() + c);
    }
  }
  for (ll i = 0; i < x.size(); i++)
  {
    temp.pb(x[i]);
  }
  sort(all(temp));
  // for (auto c : temp)
  //   cout
  //       << c << " ";
  // cout << el;
  if (temp == a)
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

  tst Beche_achi();

  Goodbye
}