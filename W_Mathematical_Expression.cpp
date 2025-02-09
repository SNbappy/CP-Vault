#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    // Input values for a, s, b, q, and c
    cin >> a >> s >> b >> q >> c;

    // Check the given expression and calculate the right answer
    int rightAnswer;
    if (s == '+')
    {
        rightAnswer = a + b;
    }
    else if (s == '-')
    {
        rightAnswer = a - b;
    }
    else if (s == '*')
    {
        rightAnswer = a * b;
    }

    // Check if the expression is right or print the correct answer
    if (rightAnswer == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << rightAnswer << endl;
    }

    return 0;
}
