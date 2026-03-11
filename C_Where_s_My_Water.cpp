/*
بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
Author: Depressed_C0der
Created: 2026-03-08 21:03:15
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
    int n, h;
    cin >> n >> h;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = *max_element(all(a));
    int ans = 0;

    if (mx < h)
    {
        ans += (h - mx) * n;
    }

    int mm = 0;
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (a[i] != mx)
        {
            int x = a[i];
            for (int j = i; j < n; j++)
            {
                x = max(a[j], x);
                cnt += (mx - x);
            }
            x = a[i];
            for (int j = i - 1; j >= 0; j--)
            {
                x = max(x, a[j]);
                cnt += (mx - x);
            }
        }
        mm = max(mm, cnt);
        if (mm == cnt)
        {
            l = i;
        }
    }

    vector<int> v;

    v.push_back(l);

    // cout << l << "\n";

    int vvv = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (i == l)
        {
            int x = a[i];
            for (int j = i + 1; j < n; j++)
            {
                x = max(a[j], x);
                if (x == a[j])
                    v.push_back(j);
            }
            x = a[i];
            for (int j = i - 1; j >= 0; j--)
            {
                x = max(x, a[j]);
                if (x == a[j])
                    v.push_back(j);
            }
        }
    }

    int mc = 0;
    sort(all(v));

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (a[i] != mx)
        {
            bool ok = true;
            int ll = 0, hh = v.size() - 1;


            while (ll <= hh) {
                int mid = (ll + hh) / 2;
                // cout << v[mid] << '\n';
                if (i == v[mid]){
                    ok = false;
                    break;
                }
                else if (i < v[mid])
                    hh = mid - 1;
                else
                    ll = mid + 1;
            }
            if(!ok)
                continue;
            int x = a[i];
            for (int j = i; j < n; j++)
            {

                x = max(x, a[j]);

                bool okk = true;
                int ll = 0, hh = v.size() - 1;

                while (ll <= hh)
                {
                    int mid = (ll + hh) / 2;
                    if (j == v[mid])
                    {
                        okk = false;
                        break;
                    }
                    else if (j < v[mid])
                        hh = mid - 1;
                    else
                        ll = mid + 1;
                }


                // for (int xx = 0; xx < v.size(); xx++)
                // {
                //     if (v[xx] == j) {
                //         okk = false;
                //         break;
                //     }
                // }
                

                if (!okk)
                    continue;
                



                cnt += (mx - x);
            }
            x = a[i];
            for (int j = i - 1; j >= 0; j--)
            {

                x = max(x, a[j]);

                bool okk = true;
                int ll = 0, hh = v.size() - 1;

                while (ll <= hh)
                {
                    int mid = (ll + hh) / 2;
                    if (j == v[mid])
                    {
                        okk = false;
                        break;
                    }
                    else if (j < v[mid])
                        hh = mid - 1;
                    else
                        ll = mid + 1;
                }

                // for (int xx = 0; xx < v.size(); xx++)
                // {
                //     if (v[xx] == j)
                //     {
                //         okk = false;
                //         break;
                //     }
                // }

                if (!okk)
                    continue;




                // cout << x << '\n';
                cnt += (mx - x);
            }
        }
        mc = max(mc, cnt);
        if (mc == cnt)
        {
            vvv = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (i == l)
        {
            int x = a[i];
            for (int j = i; j < n; j++)
            {
                x = max(a[j], x);
                if (j == vvv)
                    mc -= (mx - x);
            }
            x = a[i];
            for (int j = i - 1; j >= 0; j--)
            {
                x = max(x, a[j]);
                if (j == vvv)
                mc -= (mx - x);
            }
        }
        mm = max(mm, cnt);
        if (mm == cnt)
        {
            l = i;
        }
    }

    // cout << l << '\n';
    // cout << mc << '\n';
    cout << ans + mm + mc << '\n';
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