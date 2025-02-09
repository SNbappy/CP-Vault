#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    long long int n;
    double sum = 0.0;
    long long int abrar[101];
    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &abrar[i]);
        sum += abrar[i] / 100.0;
    }

    printf("%.12f\n", (sum / n) * 100.0);

    return 0;
}