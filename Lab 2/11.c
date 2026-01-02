#include <stdio.h>
void main()
{
    int x, y, gcd = 1;
    printf("Enter any two number: ");
    scanf("%d", &x);
    scanf("%d", &y);
    int min = (x < y ? x : y);
    for (int i = 1; i <= min; i++)
    {
        if (x % i == 0)
        {
            if (y % i == 0)
            {
                gcd = i;
            }
        }
    }
    printf("GCD of %d and %d is %d", x, y, gcd);
}