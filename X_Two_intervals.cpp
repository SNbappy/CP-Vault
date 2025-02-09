#include <iostream>

using namespace std;

int main()
{
    int l1, r1, l2, r2;

    // Input values for intervals [l1, r1] and [l2, r2]
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the boundaries of the intersection
    int intersection_start = max(l1, l2);
    int intersection_end = min(r1, r2);

    // Check if there is an intersection
    if (intersection_start <= intersection_end)
    {
        cout << intersection_start << " " << intersection_end << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
