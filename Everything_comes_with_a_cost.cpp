#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// normalize a and b so that gcd(a,b)=1 and (a>0 or a==0&&b>0)
void norm_pair(ll &a, ll &b)
{
    if (a < 0 || (a == 0 && b < 0))
    {
        a = -a;
        b = -b;
    }
    ll g = gcd(abs(a), abs(b));
    a /= g;
    b /= g;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<ll, ll>> pts;
        for (int i = 0; i < n; i++)
        {
            string row;
            cin >> row;
            for (int j = 0; j < m; j++)
            {
                if (row[j] == '.')
                {
                    pts.emplace_back(i, j);
                }
            }
        }

        int K = pts.size();
        if (K < 2)
        {
            cout << 0 << "\n";
            continue;
        }

        struct Line
        {
            ll nx, ny, c;
        };
        struct H
        {
            size_t operator()(Line const &L) const noexcept
            {
                return ((uint64_t)L.nx * 0x9e3779b97f4a7c15ULL ^ (uint64_t)L.ny << 1 ^ (uint64_t)L.c << 2);
            }
        };
        struct Eq
        {
            bool operator()(Line const &A, Line const &B) const
            {
                return A.nx == B.nx && A.ny == B.ny && A.c == B.c;
            }
        };

        unordered_set<Line, H, Eq> lines;
        lines.reserve((size_t)K * (K - 1) / 2);

        for (int i = 0; i < K; i++)
        {
            auto [x1, y1] = pts[i];
            for (int j = i + 1; j < K; j++)
            {
                auto [x2, y2] = pts[j];
                ll dx = x2 - x1;
                ll dy = y2 - y1;
                // direction = (dx,dy) normalized
                norm_pair(dx, dy);
                // normal = (-dy, dx)
                ll nx = -dy, ny = dx;
                // normalize the normal
                norm_pair(nx, ny);
                // compute C = nx*x1 + ny*y1
                ll C = nx * x1 + ny * y1;
                // if we flipped (nx,ny) sign, C is already correct
                // now (nx,ny,C) identifies the infinite line
                lines.insert(Line{nx, ny, C});
            }
        }

        // answer = number of distinct infinite lines that contain ≥2 dots
        cout << lines.size() << "\n";
    }
    return 0;
}
