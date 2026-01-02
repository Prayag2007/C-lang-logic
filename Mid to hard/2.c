#include <stdio.h>
void main()
{
    int n, temp;
    printf("Enter any number: ");
    scanf("%d", &n);
    temp = n;
    if (n <= 0)
    {
        printf("%d is not an ugly number", n);
    }

    while (n % 2 == 0)
    {
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        n = n / 3;
    }
    while (n % 5 == 0)
    {
        n = n / 5;
    }

    if (n == 1)
    {
        printf("%d is an ugly number", temp);
    }
    else
    {
        printf("%d is not an ugly number", temp);
    }
}