#include <stdio.h>
void main()
{
    int x, ans = 0;
    printf("Enter any number: ");
    scanf("%d", &x);
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            ans = ans + i;
        }
    }
    if (ans == x)
    {
        printf("%d is a perfect number", x);
    }
    else
    {
        printf("%d is not a perfect number", x);
    }
}