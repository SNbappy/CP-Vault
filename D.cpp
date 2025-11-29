#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Structure to store the result of our check
struct CheckResult
{
    bool possible;
    int u; // Index chosen from the first army (1-based)
    int v; // Index chosen from the second army (1-based)
};

// Function to check if 'target' army can be wiped out by 'enemy' army
CheckResult can_wipe(int n, const vector<long long> &target, const vector<long long> &enemy, long long sumTarget, long long sumEnemy)
{
    // Basic Condition 1: Must have enough enemies
    if (sumTarget > sumEnemy)
        return {false, -1, -1};

    // Identify "tight" constraints (Condition 2)
    // A constraint is tight if target[i] + enemy[i] == sumEnemy.
    // If target[i] + enemy[i] > sumEnemy, it's impossible immediately.
    vector<int> tight_indices;
    for (int i = 0; i < n; ++i)
    {
        long long combined = target[i] + enemy[i];
        if (combined > sumEnemy)
            return {false, -1, -1};
        if (combined == sumEnemy)
        {
            tight_indices.push_back(i);
        }
    }

    // According to mathematical properties, tight_indices.size() cannot exceed 2
    // when sumTarget <= sumEnemy.

    // CASE 0: No tight constraints. We have freedom.
    if (tight_indices.empty())
    {
        // Find any unit in target > 0
        int u = -1;
        for (int i = 0; i < n; ++i)
        {
            if (target[i] > 0)
            {
                u = i;
                break;
            }
        }
        if (u == -1)
            return {false, -1, -1}; // Target already empty

        // Find any unit in enemy > 0 such that index != u
        int v = -1;
        for (int i = 0; i < n; ++i)
        {
            if (i != u && enemy[i] > 0)
            {
                v = i;
                break;
            }
        }

        if (v != -1)
            return {true, u + 1, v + 1};
        return {false, -1, -1};
    }

    // CASE 1: Exactly one tight constraint (index p).
    // We must involve 'p' in the battle to lower the constraint requirement.
    else if (tight_indices.size() == 1)
    {
        int p = tight_indices[0];

        // Option A: Use target[p] vs some enemy[i] (where i != p)
        if (target[p] > 0)
        {
            for (int i = 0; i < n; ++i)
            {
                if (i != p && enemy[i] > 0)
                {
                    return {true, p + 1, i + 1};
                }
            }
        }

        // Option B: Use some target[i] vs enemy[p] (where i != p)
        if (enemy[p] > 0)
        {
            for (int i = 0; i < n; ++i)
            {
                if (i != p && target[i] > 0)
                {
                    return {true, i + 1, p + 1};
                }
            }
        }
        return {false, -1, -1};
    }

    // CASE 2: Exactly two tight constraints (indices p and q).
    // We must involve both p and q to satisfy both constraints simultaneously.
    else if (tight_indices.size() == 2)
    {
        int p = tight_indices[0];
        int q = tight_indices[1];

        // Try matching target[p] with enemy[q]
        if (target[p] > 0 && enemy[q] > 0)
            return {true, p + 1, q + 1};

        // Try matching target[q] with enemy[p]
        if (target[q] > 0 && enemy[p] > 0)
            return {true, q + 1, p + 1};

        return {false, -1, -1};
    }

    return {false, -1, -1};
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    long long sumA = 0, sumB = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sumA += a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
        sumB += b[i];
    }

    // 1. Try to see if we can wipe out Army A
    CheckResult resA = can_wipe(n, a, b, sumA, sumB);
    if (resA.possible)
    {
        cout << "YES" << endl;
        cout << resA.u << " " << resA.v << endl;
        return;
    }

    // 2. Try to see if we can wipe out Army B
    // Note: When calling can_wipe with B as target, 'u' comes from B and 'v' comes from A.
    CheckResult resB = can_wipe(n, b, a, sumB, sumA);
    if (resB.possible)
    {
        cout << "YES" << endl;
        // Output must be "IndexFromA IndexFromB", so we print v then u
        cout << resB.v << " " << resB.u << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}