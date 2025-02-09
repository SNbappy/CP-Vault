#include <stdio.h>
#include <string.h>

int main()
{
    char A[100001], B[100001];

    // Input values for strings A and B
    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    // Check if the lengths of both strings are equal
    if (lenA != lenB)
    {
        printf("NO\n");
        return 0;
    }

    int diffCount = 0;
    int diffIndex[2] = {-1, -1};

    // Count the differences and store their indices
    for (int i = 0; i < lenA; ++i)
    {
        if (A[i] != B[i])
        {
            if (diffCount < 2)
            {
                diffIndex[diffCount] = i;
            }
            ++diffCount;
        }
    }

    // Check if the strings can be made equal with one swap
    if (diffCount == 2 && A[diffIndex[0]] == B[diffIndex[1]] && A[diffIndex[1]] == B[diffIndex[0]])
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
