/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2025-05-18 17:35:04
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
    ll t;
    cin >> t;
    for (ll cs = 0; cs < t; cs++)
    {
        cout << "Case " << cs + 1 << ": ";
        string s, st;
        cin >> s >> st;
        string temp = "";
        ll k = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                k = i;
                break;
            }
            temp += s[i];
        }
        ll a = stoll(temp);
        string p = "";
        while (a)
        {
            ll obo = a % 2;
            a /= 2;
            if (obo == 1)
                p += '1';
            else
                p += '0';
        }
        reverse(all(p));
        string final = "";
        if (p.size() < 8)
        {
            for (ll i = 0; i < (8 - p.size()); i++)
            {
                /* code */
                final += '0';
            }
            final += p;
        }
        else
            final += p;
        // cout << final << " " << st.substr(0, 8) << el;
        if (final != st.substr(0, 8))
        {
            cout << "No" << el;
            continue;
        }

        // cout << final << " " << st.substr(0, 8) << el;

        // second part
        temp = "";
        for (ll i = k + 1; i < s.size(); i++)
        {
            /* code */
            if (s[i] == '.')
            {
                k = i;
                break;
            }
            temp += s[i];
        }

        a = stoll(temp);
        p = "";
        while (a)
        {
            ll obo = a % 2;
            a /= 2;
            if (obo == 1)
                p += '1';
            else
                p += '0';
        }
        reverse(all(p));
        final = "";
        if (p.size() < 8)
        {
            for (ll i = 0; i < (8 - p.size()); i++)
            {
                final += '0';
            }
            final += p;
        }
        else
            final += p;
        // cout << final << el;
        // cout << st.substr(9, 8) << el;
        if (final != st.substr(9, 8))
        {
            cout << "No" << el;
            continue;
        }

        // third part
        temp = "";
        for (ll i = k + 1; i < s.size(); i++)
        {
            /* code */
            if (s[i] == '.')
            {
                k = i;
                break;
            }
            temp += s[i];
        }

        a = stoll(temp);
        p = "";
        while (a)
        {
            ll obo = a % 2;
            a /= 2;
            if (obo == 1)
                p += '1';
            else
                p += '0';
        }
        reverse(all(p));
        final = "";
        if (p.size() < 8)
        {
            for (ll i = 0; i < (8 - p.size()); i++)
            {
                final += '0';
            }
            final += p;
        }
        else
            final += p;
        // cout << final << el;
        // cout << st.substr(9, 8) << el;
        // cout << final << " " << st.substr(18, 8) << el;
        if (final != st.substr(18, 8))
        {
            cout << "No" << el;
            continue;
        }

        // fourth part
        temp = "";
        for (ll i = k + 1; i < s.size(); i++)
        {
            /* code */
            if (s[i] == '.')
            {
                k = i;
                break;
            }
            temp += s[i];
        }

        a = stoll(temp);
        p = "";
        while (a)
        {
            ll obo = a % 2;
            a /= 2;
            if (obo == 1)
                p += '1';
            else
                p += '0';
        }
        reverse(all(p));
        final = "";
        if (p.size() < 8)
        {
            for (ll i = 0; i < (8 - p.size()); i++)
            {
                final += '0';
            }
            final += p;
        }
        else
            final += p;
        // cout << final << el;
        // cout << st.substr(9, 8) << el;
        // cout << final << " " << st.substr(27, 8) << el;
        if (final != st.substr(27, 8))
        {
            cout << "No" << el;
            continue;
        }
        cout << "Yes" << el;
    }
}

/************************************************************
 *                      Main Function                      *
 ************************************************************/

Depressed_C0der
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // tst
    Beche_achi();

    Goodbye
}