/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-06-03 20:51:54
*/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define ll long long
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
const int MAX_N = 10;
int fib[MAX_N + 1];

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

struct Slot
{
    ll w, l, h;
    Slot(ll _w, ll _l, ll _h) : w(_w), l(_l), h(_h) {}
};

void Beche_achi()
{

    ll n, m;
    cin >> n >> m;

    fib[1] = 1;
    fib[2] = 2;
    for (ll i = 3; i <= MAX_N; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    vector<ll> cubes(n);
    for (ll i = 0; i < n; ++i)
    {
        cubes[i] = fib[i + 1];
    }

    reverse(all(cubes));

    string s;

    for (ll bi = 0; bi < m; ++bi)
    {
        ll w, l, h;
        cin >> w >> l >> h;

        bool boxFits = false;

        array<array<ll, 3>, 3> perms = {{{w, l, h},
                                          {w, h, l},
                                          {l, h, w}}};

        for (auto &p : perms)
        {
            ll W = p[0], L = p[1], H = p[2];

            if (W < cubes[0] || L < cubes[0] || H < cubes[0])
            {
                continue;
            }

            vector<Slot> freeSlots;
            freeSlots.emplace_back(W, L, H);

            bool possible = true;

            for (ll side : cubes)
            {
                bool placed = false;

                for (ll si = 0; si < (ll)freeSlots.size(); ++si)
                {
                    ll sw = freeSlots[si].w;
                    ll sl = freeSlots[si].l;
                    ll sh = freeSlots[si].h;
                    if (sw >= side && sl >= side && sh >= side)
                    {
                        freeSlots.erase(freeSlots.begin() + si);

                        if (sh > side)
                        {
                            freeSlots.emplace_back(side, side, sh - side);
                        }
                        if (sw > side)
                        {
                            freeSlots.emplace_back(sw - side, side, side);
                        }
                        if (sl > side)
                        {
                            freeSlots.emplace_back(sw, sl - side, side);
                        }

                        placed = true;
                        break;
                    }
                }

                if (!placed)
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
            {
                boxFits = true;
                break;
            }
        }

        s.push_back(boxFits ? '1' : '0');
    }

    cout << s << "\n";
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