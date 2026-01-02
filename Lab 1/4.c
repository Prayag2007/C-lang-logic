#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    while ( n != 0)
    {
        int x = n % 10;
        printf("%d", x);
        n = n / 10;
    }
}