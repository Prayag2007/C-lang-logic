#include <stdio.h>

int isAuto(int n)
{
    int x = n * n;
    while (n > 0)
    {
        if (n % 10 != x % 10)
        {
            return 1;
        }
        n = n / 10;
        x = x / 10;
    }
    return 0;
}
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int a = isAuto(n);
    if (a == 0)
    {
        printf("%d is a Automorphic number", n);
    }
    else
    {
        printf("%d is not a Automorphic number", n);
    }
}