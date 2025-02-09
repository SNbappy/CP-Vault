#include <stdio.h>

int main()
{
    double N;

    // Input value for N
    scanf("%lf", &N);

    // Check if N is a float or integer
    if (N == (int)N)
    {
        // N is an integer
        printf("int %.0lf\n", N);
    }
    else
    {
        // N is a float
        printf("float %d %.3lf\n", (int)N, N - (int)N);
    }

    return 0;
}
