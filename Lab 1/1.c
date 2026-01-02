#include<stdio.h>
void main()
{
    int n[10],ans=0 ;
    printf("Enter any 10 number\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter digit %d: ", i + 1);
        scanf("%d",&n[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        ans = ans + n[i] ;
    }
    printf("sum of every number is %d",ans) ;
}