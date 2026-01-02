#include<stdio.h>
void main()
{
    int x,y,ans=1 ;
    printf("Enter any two Digits: ");
    scanf("%d",&x);
    scanf("%d",&y);
    for (int i = y; i > 0; i--)
    {
        ans = ans*x ;
    }
    printf("Answer is %d",ans) ;
}