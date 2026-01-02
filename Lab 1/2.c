#include<stdio.h>
void main()
{
    int n,ans=1 ;
    printf("Enter any number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        ans = ans*i ;
    }
    printf("Factorial of %d is %d",n,ans) ;
}