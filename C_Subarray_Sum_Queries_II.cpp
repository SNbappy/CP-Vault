#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Structure to hold segment tree node information
struct Node
{
    ll total;  // Total sum of the segment
    ll prefix; // Maximum prefix sum in the segment
    ll suffix; // Maximum suffix sum in the segment
    ll maxsum; // Maximum subarray sum in the segment

    // Default constructor (for empty nodes)
    Node() : total(0), prefix(0), suffix(0), maxsum(0) {}
    // Constructor for a single element
    Node(ll x) : total(x), prefix(max(0LL, x)), suffix(max(0LL, x)), maxsum(max(0LL, x)) {}
};

int n, q;
vector<ll> arr;
vector<Node> seg;

// Merge two nodes
Node merge(const Node &l, const Node &r)
{
    Node res;
    res.total = l.total + r.total;
    res.prefix = max(l.prefix, l.total + r.prefix);
    res.suffix = max(r.suffix, r.total + l.suffix);
    res.maxsum = max({l.maxsum, r.maxsum, l.suffix + r.prefix});
    return res;
}

// Build the segment tree
void build(int idx, int l, int r)
{
    if (l == r)
    {
        seg[idx] = Node(arr[l]);
        return;
    }
    int mid = (l + r) / 2;
    build(2 * idx, l, mid);
    build(2 * idx + 1, mid + 1, r);
    seg[idx] = merge(seg[2 * idx], seg[2 * idx + 1]);
}

// Query the segment tree for range [ql, qr]
Node query(int idx, int l, int r, int ql, int qr)
{
    if (qr < l || r < ql)
        return Node(); // Return neutral node (all zeros)
    if (ql <= l && r <= qr)
        return seg[idx];
    int mid = (l + r) / 2;
    Node left = query(2 * idx, l, mid, ql, qr);
    Node right = query(2 * idx + 1, mid + 1, r, ql, qr);
    return merge(left, right);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    arr.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    seg.resize(4 * n);
    build(1, 0, n - 1);

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        // Convert to 0-based indices
        a--;
        b--;
        Node res = query(1, 0, n - 1, a, b);
        cout << res.maxsum << '\n';
    }
    return 0;
}
