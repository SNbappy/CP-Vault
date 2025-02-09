#include <vector>
using namespace std;

int main()
{
    long long n = 10;                      // Avoid mismatched types
    vector<int> a(static_cast<size_t>(n)); // Cast 'n' to size_t
    return 0;
}
