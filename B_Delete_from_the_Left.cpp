#include <stdio.h>
#include <string.h>

int main()
{
    char a[200001], b[200001];

    scanf("%s %s", a, b);

    int n, len1, len2, cnt = 0;
    char c, d;

    len1 = strlen(a);
    len2 = strlen(b);

    if (len1 > len2)
        n = len2;
    else
        n = len1;

    for (int i = 0; i < n; i++)
    {
        c = a[len1 - i - 1];
        d = b[len2 - i - 1];
        if (c != d)
            break;
        cnt += 2;
    }
    printf("%d\n", (len1 + len2 - cnt));

    return 0;
}
