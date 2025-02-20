#include <bits/stdc++.h>
using namespace std;

// Explanation:
// We precompute:
//  1. Global prefix frequency for s (for any interval in s).
//  2. For the left–half (indices 0 .. n/2-1), a prefix frequency array.
//  3. For the “reversed right–half” (define R[i] = s[n-1-i] for i=0..n/2-1).
//  4. An array 'mism' for i in [0,n/2) with mism[i]=1 if s[i]!=s[n-1-i] (and its prefix sum).
//
// Then for each candidate substring X = [L, L+k-1] (to be shuffled) we set F = [0,L-1]∪[L+k, n-1].
// For every pair (i, n-1-i) (i=0..n/2-1):
//   - If both indices lie in F then they must already match.
//     (This holds for i in [0, m) where m = min(L, n - (L+k)) , capped by n/2.)
//   - If one index is in F and the other in X then the fixed letter forces a requirement:
//       • For i with i < L and n-1-i in X, we add one forced occurrence of s[i].
//       • For i with i in X and n-1-i in F, we add one forced occurrence of s[n-1-i].
// We then compare these forced counts with the counts in X (obtained via our global prefix frequency).
//
// Finally, we binary–search for the minimum k for which there exists some L (0 ≤ L ≤ n–k) making these conditions hold.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int half = n / 2; // n is even.

        // 1. Global prefix frequency for s:
        vector<vector<int>> freq(n + 1, vector<int>(26, 0));
        for (int i = 0; i < n; i++)
        {
            for (int c = 0; c < 26; c++)
            {
                freq[i + 1][c] = freq[i][c];
            }
            freq[i + 1][s[i] - 'a']++;
        }

        // 2. Prefix frequency for left half (indices 0..half-1):
        vector<vector<int>> leftFreq(half + 1, vector<int>(26, 0));
        for (int i = 0; i < half; i++)
        {
            for (int c = 0; c < 26; c++)
            {
                leftFreq[i + 1][c] = leftFreq[i][c];
            }
            leftFreq[i + 1][s[i] - 'a']++;
        }

        // 3. Build array R: R[i] = s[n-1-i] for i=0..half-1 (right half in reverse)
        vector<char> R(half);
        for (int i = 0; i < half; i++)
        {
            R[i] = s[n - 1 - i];
        }
        vector<vector<int>> Rfreq(half + 1, vector<int>(26, 0));
        for (int i = 0; i < half; i++)
        {
            for (int c = 0; c < 26; c++)
            {
                Rfreq[i + 1][c] = Rfreq[i][c];
            }
            Rfreq[i + 1][R[i] - 'a']++;
        }

        // 4. Mismatch array for pairs (i, n-1-i), for i=0..half-1.
        vector<int> mism(half, 0);
        for (int i = 0; i < half; i++)
        {
            mism[i] = (s[i] != s[n - 1 - i]) ? 1 : 0;
        }
        vector<int> mismPref(half + 1, 0);
        for (int i = 0; i < half; i++)
        {
            mismPref[i + 1] = mismPref[i] + mism[i];
        }

        // We'll binary search for the minimal k (0<= k <= n) for which there is some interval X=[L, L+k-1]
        // that can be fixed by shuffling.
        int lo = 0, hi = n, ans = n;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2; // candidate length k = mid
            bool candidateWorks = false;

            // k==0 works if s is already a palindrome.
            if (mid == 0)
            {
                if (mismPref[half] == 0)
                {
                    candidateWorks = true;
                }
            }
            else
            {
                // For each possible starting index L (0 <= L <= n - mid)
                for (int L = 0; L <= n - mid; L++)
                {
                    int R_index = L + mid - 1;
                    // Condition (fixed part): for every pair (i, n-1-i) completely in F,
                    // we need s[i] == s[n-1-i].
                    // Fixed part F = [0,L-1] ∪ [R_index+1, n-1].
                    // A pair (i, n-1-i) is completely fixed if i < L and n-1-i > R_index.
                    // Let m_val = min(L, n - (R_index+1)) = min(L, n - L - mid).
                    int m_val = min(L, n - (R_index + 1));
                    if (m_val > half)
                        m_val = half;
                    if (mismPref[m_val] != 0)
                        continue; // this candidate L fails.

                    // Now compute the forced letter counts from split pairs.
                    // (a) For pairs with fixed index in the prefix:
                    //    We need to consider i with i < L and n-1-i in X.
                    //    The condition n-1-i in X means: L <= n-1-i <= R_index,
                    //    i.e. n - R_index - 1 <= i <= n - L - 1.
                    //    So let A_start = max(0, n - L - mid) and A_end = L - 1.
                    int A_start = max(0, n - L - mid);
                    int forcedA[26];
                    for (int c = 0; c < 26; c++)
                        forcedA[c] = 0;
                    if (L > A_start)
                    {
                        for (int c = 0; c < 26; c++)
                        {
                            forcedA[c] = leftFreq[L][c] - leftFreq[A_start][c];
                        }
                    }
                    // (b) For pairs with fixed index in the suffix:
                    //    That is, for i in X with i in [L, ?] such that n-1-i is fixed.
                    //    n-1-i fixed means n-1-i >= R_index+1  ⟹  i <= n - R_index - 2.
                    //    So for i in [L, B] where B = min(half, n - L - mid) - 1.
                    int B_lim = min(half, n - L - mid); // one past last index
                    int forcedB[26];
                    for (int c = 0; c < 26; c++)
                        forcedB[c] = 0;
                    if (B_lim > L)
                    {
                        for (int c = 0; c < 26; c++)
                        {
                            forcedB[c] = Rfreq[B_lim][c] - Rfreq[L][c];
                        }
                    }

                    int forced[26];
                    for (int c = 0; c < 26; c++)
                    {
                        forced[c] = forcedA[c] + forcedB[c];
                    }

                    // Count letters in X = [L, R_index]:
                    int countX[26];
                    for (int c = 0; c < 26; c++)
                    {
                        countX[c] = freq[L + mid][c] - freq[L][c];
                    }

                    bool ok = true;
                    for (int c = 0; c < 26; c++)
                    {
                        if (countX[c] < forced[c])
                        {
                            ok = false;
                            break;
                        }
                    }
                    if (ok)
                    {
                        candidateWorks = true;
                        break;
                    }
                }
            }

            if (candidateWorks)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
