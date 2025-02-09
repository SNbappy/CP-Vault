#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long n, s;
        scanf("%lld %lld", &n, &s);

        // Check if it is possible to find distinct positive integers
        // whose summation equals s and each is less than or equal to n
        if (s <= n)
        {
            printf("2 %lld %lld\n", s, s - 1);
        }
        else
        {
            long long k = (s + n - 1) / n;
            long long remainder = s % n;

            if (remainder == 0)
            {
                printf("%lld", k);
                for (int i = 0; i < k; ++i)
                {
                    printf(" %lld", n);
                }
                printf("\n");
            }
            else
            {
                printf("2 %lld %lld\n", k, remainder);
            }
        }
    }

    return 0;
}
