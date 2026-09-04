/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-09-03 23:55:58
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
    int n;
    cin >> n;

    // cnt[mask] = how many previous strings have this exact parity mask.
    //
    // The mask represents which characters occur an ODD number of times.
    //
    // Example:
    // "aab"
    // a occurs 2 times -> even -> bit a = 0
    // b occurs 1 time  -> odd  -> bit b = 1
    //
    // So the mask represents:
    // a b c d ...
    // 0 1 0 0 ...
    map<int, int> cnt;

    // Stores the total number of valid pairs found so far.
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // Initially, no character has appeared.
        // So all 26 bits are 0.
        int mask = 0;

        // ---------------------------------------------------------
        // STEP 1: Create the parity mask of the current string
        // ---------------------------------------------------------
        //
        // We have 26 bits for 26 lowercase letters:
        //
        // bit 0  -> 'a'
        // bit 1  -> 'b'
        // bit 2  -> 'c'
        // ...
        // bit 25 -> 'z'
        //
        // If a character appears:
        //   odd number of times  -> its bit becomes 1
        //   even number of times -> its bit becomes 0
        //
        // XOR is perfect for this because:
        //
        // 0 ^ 1 = 1  -> turn bit ON
        // 1 ^ 1 = 0  -> turn bit OFF
        //
        // Therefore, every occurrence TOGGLES the corresponding bit.
        //
        // Example: "aab"
        //
        // Start:
        // mask = 000000
        //
        // 'a':
        // bit = 0
        // 1LL << 0 = 000001
        // mask = 000000 ^ 000001 = 000001
        //
        // second 'a':
        // mask = 000001 ^ 000001 = 000000
        //
        // 'b':
        // 1LL << 1 = 000010
        // mask = 000000 ^ 000010 = 000010
        //
        // Final mask = 000010
        // Only 'b' has odd frequency.
        for (char c : s)
        {
            // Convert character into bit position.
            //
            // 'a' - 'a' = 0
            // 'b' - 'a' = 1
            // 'c' - 'a' = 2
            // ...
            int bit = c - 'a';

            // Create a mask having ONLY this bit set to 1.
            //
            // Example:
            // bit = 2
            // 1LL << 2 = 00100
            //
            // XOR toggles that bit in our main mask.
            mask ^= (1LL << bit);
        }

        // ---------------------------------------------------------
        // STEP 2: Count previous strings having the SAME mask
        // ---------------------------------------------------------
        //
        // Suppose current mask = M.
        //
        // If a previous string also has mask M:
        //
        //       M
        // XOR   M
        //     -----
        //       0
        //
        // The combined string has ZERO characters with odd frequency.
        //
        // A string can be rearranged into a palindrome if it has
        // at most ONE character with odd frequency.
        //
        // Therefore, same mask gives a VALID pair.
        //
        // cnt[mask] tells us how many previous strings have
        // exactly the same mask.
        ans += cnt[mask];

        // ---------------------------------------------------------
        // STEP 3: Try masks that differ by EXACTLY ONE bit
        // ---------------------------------------------------------
        //
        // A palindrome can also have exactly ONE character
        // with an odd frequency.
        //
        // So we need:
        //
        // current_mask XOR previous_mask
        //
        // to contain exactly ONE set bit.
        //
        // To achieve that, previous_mask must differ from
        // current mask by exactly ONE bit.
        //
        // We try flipping every one of the 26 bits.
        for (int bit = 0; bit < 26; bit++)
        {
            // 1LL << bit creates a mask with exactly ONE bit = 1.
            //
            // Example:
            // bit = 0 -> 000001
            // bit = 1 -> 000010
            // bit = 2 -> 000100
            //
            // XOR with this mask FLIPS that particular bit.
            //
            // Therefore:
            //
            // newMask = current mask with ONE bit flipped.
            int newMask = mask ^ (1LL << bit);

            // cnt[newMask] tells us how many previous strings
            // have this one-bit-different mask.
            //
            // When we XOR:
            //
            // mask
            // XOR newMask
            // ------------
            // exactly ONE bit is 1
            //
            // So the combined string has exactly ONE odd-frequency
            // character -> it can be rearranged into a palindrome.
            ans += cnt[newMask];
        }

        // ---------------------------------------------------------
        // STEP 4: Store the current mask
        // ---------------------------------------------------------
        //
        // We have finished checking the current string.
        // Now store it so that FUTURE strings can form pairs with it.
        //
        // We do this AFTER counting.
        //
        // Otherwise, the current string could accidentally be
        // counted as a pair with itself.
        cnt[mask]++;
    }

    // Print total number of valid unordered pairs.
    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case " << i << ": ";
        Depressed_C0der();
    }
    return 0;
}