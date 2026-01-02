#include<stdio.h>
void main()
{
    int n,ans=0 ;
    printf("Enter any number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        ans = ans+(i*i) ;
    }
    printf("Answer of series till %d is %d",n,ans) ;
}