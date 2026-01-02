#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int x = n, ans = 0, k = 1;
    while (n != 0)
    {
        ans = ans + (n % 8) * k;
        n = n / 8;
        k=k*10;
    }

    printf("%d is %d in octal",x,ans);
}