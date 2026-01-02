#include <stdio.h>
void main()
{
    int n, ans = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    int a = n;
    while (n != 0)
    {
        int x = n % 10;
        ans = ans + x;
        n = n / 10;
    }
    if (a % ans == 0)
    {
        printf("%d is a harshad number", a);
    }
    else
    {
        printf("%d is not a harshad number", a);
    }
}