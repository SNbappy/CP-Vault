#include <stdio.h>
#include <math.h>

int main()
{
    long long A, B, C, D;

    // Input values for A, B, C, and D
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    // Calculate A^B and C^D
    long long resultAB = pow(A, B);
    long long resultCD = pow(C, D);

    // Check if A^B > C^D
    if (resultAB > resultCD)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
