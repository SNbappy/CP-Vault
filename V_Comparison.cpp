#include <stdio.h>

int main()
{
    int A, B;
    char S;

    // Input values for A, S, and B
    scanf("%d %c %d", &A, &S, &B);

    // Determine whether the comparison is Right or Wrong
    if ((S == '<' && A < B) || (S == '>' && A > B) || (S == '=' && A == B))
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong\n");
    }

    return 0;
}
