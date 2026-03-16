/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-15 14:23:00
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define sz(x) (int)x.size()
#define fi first
#define se second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define vpii vector<pair<int, int>>
#ifndef ONLINE_JUDGE
#define debug(...)                                                  \
    cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; \
    _print(__VA_ARGS__)
#else
#define debug(...)
#endif

void Depressed_C0der()
{
    // n = total number of cards in the deck
    // k = at any moment Bob can choose from the first k positions (1-based count)
    // p = position (1-based from input) of the special "win" card; we convert to 0-based
    // m = total amount of 'mana' or resource Bob has to play cards
    int n, k, p, m;
    cin >> n >> k >> p >> m;

    // convert p from 1-based (input) to 0-based index for array usage
    --p;

    // a[i] = cost (or value) of card at position i (0-based)
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // -----------------------------
    // Part 1: compute A
    // -----------------------------
    // A = minimal total cost of the cards that MUST be played before
    // the first time we can play the "win" card at index p.
    //
    // Explanation:
    // At the start, Bob can pick from first k positions only.
    // To reach position p (0-based) so that the p-th card is inside the first k,
    // we may need to play some cards from indices before p.
    //
    // In 1-based terms: need_before = max(0, p1 - k)
    // where p1 = p+1 (original input position).
    //
    // Concretely: if (p+1) <= k, the p-th card is already in the first k — no mandatory cards before it.
    // Otherwise, we must play (p+1 - k) cards from the first p cards (indices 0..p-1)
    // to shift the window so the p-th card becomes selectable.
    int need_before = max(0LL, (p + 1) - k);

    // A accumulates the smallest possible cost of those `need_before` cards
    // (we choose cheapest among the cards before p to minimize spent mana).
    int A = 0;
    if (need_before > 0 && p > 0)
    {
        // take all cards before index p
        vector<int> before(a.begin(), a.begin() + p);

        // sort ascending so we can pick the smallest `need_before` costs
        sort(all(before));

        // sum the smallest `need_before` elements (or fewer if not available)
        for (int i = 0; i < need_before && i < (int)before.size(); ++i)
            A += before[i];
    }
    // If need_before == 0, A remains 0 (no mandatory plays before first win-card)

    // -----------------------------
    // Part 2: compute B
    // -----------------------------
    // B = minimal total cost of the cards that must be played between
    // two consecutive plays of the win-card (i.e., the repeating cost per cycle).
    //
    // Reason:
    // After playing the win-card once, to play it again we need to wait until
    // it becomes again within the first k positions. Each "cycle" (time between plays)
    // requires that exactly (n - k) other cards are played (because playing any card
    // shifts the window by 1; to cycle around the deck of size n so the card comes again,
    // we need n-k other plays before it returns to the front — this is the game's mechanics).
    //
    // Thus needB = n - k (number of other cards needed per cycle).
    int needB = n - k;
    int B = 0;
    if (needB > 0)
    {
        // collect all other cards except the win-card at index p
        vector<int> others;
        others.reserve(n - 1);
        for (int i = 0; i < n; ++i)
            if (i != p)
                others.push_back(a[i]);

        // choose the cheapest `needB` among these other cards to minimize the cost per cycle
        sort(all(others));
        for (int i = 0; i < needB && i < (int)others.size(); ++i)
            B += others[i];
    }
    // If needB == 0 (i.e., k == n), then B stays 0 because the win-card always stays in the first k.

    // -----------------------------
    // Part 3: check affordability for the first play
    // -----------------------------
    // ap = cost of the win-card itself
    int ap = a[p];

    // Before we can count cycles, we must ensure we can afford:
    //  - the mandatory cards before the first play (A)
    //  - plus the cost of the win-card (ap) for that first play
    //
    // If A + ap > m then Bob cannot even perform the first win-play, answer = 0.
    if (A + ap > m)
    {
        cout << 0 << '\n';
        return;
    }

    // -----------------------------
    // Part 4: compute how many total times the win-card can be played
    // -----------------------------
    // After paying A + ap for the first play, remaining mana is:
    int remain = m - A - ap;

    // Each further play requires spending `cycle = B + ap` mana:
    //  - B: cost of the required other cards per cycle (to bring the win-card back)
    //  - ap: cost of playing the win-card again
    int cycle = B + ap;

    int add = 0; // number of additional (repeat) plays after the first

    // If cycle > 0, Bob can repeat floor(remain / cycle) times.
    // If cycle == 0 (i.e., both B and ap are 0), that would be infinite in theory,
    // but in practice with non-negative integers this only happens if all those costs are zero;
    // to avoid division by zero we check cycle > 0.
    if (cycle > 0)
        add = remain / cycle;

    // Total plays = 1 (the first play we already can afford) + additional cycles
    cout << 1 + add << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}