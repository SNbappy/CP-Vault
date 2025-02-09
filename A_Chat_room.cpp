#include <iostream>
using namespace std;

bool containsHello(string s)
{
    string target = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == target[j])
        {
            j++;
            if (j == target.size())
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
        string s;
        cin >> s;
        if (containsHello(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    // }
    return 0;
}
