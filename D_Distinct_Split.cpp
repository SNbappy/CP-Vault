/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2024-08-25 06:47:06
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
#define Depressed_C0der int main()
#define Goodbye return 0;
#define all(n) n.begin(), n.end()
#define pb push_back

/************************************************************/

void Beche_achi()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    set<ll> st;

    vector<ll> pref(n, 0), suff(n, 0);

    for (ll i = 0; i < n; i++)
    {
        st.insert(s[i]);
        pref[i] = st.size();
    }

    st.clear();

    for (ll i = n - 1; i >= 0; i--)
    {
        st.insert(s[i]);
        suff[i] = st.size();
    }
    ll ans = 0;
    for (ll i = 0; i < n-1; i++)
    {
        ans = max(pref[i] + suff[i + 1], ans);
    }

    cout << ans << el;
}

Depressed_C0der
{

    tst
    Beche_achi();

    Goodbye
}