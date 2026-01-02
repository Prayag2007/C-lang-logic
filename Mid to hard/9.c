#include <stdio.h>
#include<string.h>

void main()
{
    char a[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    char x[100] ="";
    int y=0;

    int p = n;
    while (n != 0)
    {
        x[y]=a[(n % 16)] ;
        y++;
        n=n/16;
    }

    for (int i = 0; i < y/2; i++)
    {
        int temp = x[i];
        x[i] = x[y-1-i];
        x[y-1-i] = temp;
    }

    printf("%d is ",p);
    for (int i = 0; i < y; i++)
    {
        printf("%c",x[i]);
    }
    printf(" in Hexa Decimal");
}