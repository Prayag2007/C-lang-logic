#include<stdio.h>
void main()
{
    int n,ans = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while ( n != 0)
    {
        int x = n % 10;
        ans = ans + x;
        n = n / 10;
    }
    printf("Sum of every digit is %d",ans);
}