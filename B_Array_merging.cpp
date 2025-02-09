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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    map<int, int> consA, consB;

    int cons = 0;
    for (int i = 0; i < n; i++)
    {
        cons++;
        if (i == n - 1 or a[i + 1] != a[i])
        {
            if (consA.find(a[i]) == consA.end())
            {
                consA[a[i]] = cons;
            }
            else
            {
                consA[a[i]] = max(consA[a[i]], cons);
            }
            cons = 0;
        }
    }

    cons = 0;
    for (int i = 0; i < n; i++)
    {
        cons++;
        if (i == n - 1 or b[i + 1] != b[i])
        {
            if (consB.find(b[i]) == consB.end())
            {
                consB[b[i]] = cons;
            }
            else
            {
                consB[b[i]] = max(consB[b[i]], cons);
            }
            cons = 0;
        }
    }

    int ans = 0;
    for (auto [v, val] : consA)
    {
        ans = max(ans, consA[v] + consB[v]);
    }
    for (auto [v, val] : consB)
    {
        ans = max(ans, consA[v] + consB[v]);
    }

    cout << ans << endl;
}

Depressed_C0der
{
    tst
    {
        Beche_achi();
    }

    Goodbye
}
