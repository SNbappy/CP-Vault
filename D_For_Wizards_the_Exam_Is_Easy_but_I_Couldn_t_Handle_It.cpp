#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int bestDelta = 0;
        int bestL = 1, bestR = 1;

        for (int l = 1; l <= n; l++)
        {
            int delta = 0;
            for (int r = l + 1; r <= n; r++)
            {
                if (a[r] > a[l])
                    delta++; 
                else if (a[r] < a[l])
                    delta--; 

                if (delta < bestDelta)
                {
                    bestDelta = delta;
                    bestL = l;
                    bestR = r;
                }
            }
        }

        cout << bestL << " " << bestR << "\n";
    }
    return 0;
}
