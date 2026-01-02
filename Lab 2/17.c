#include<stdio.h>
void main()
{
    int n,odds=0,evens=0 ;
    printf("Enter any number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            odds=odds+i;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            evens=evens+i;
        }
    }
    printf("Answer of the series till %d is %d",n,(odds-evens)) ;
}