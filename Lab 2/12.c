#include<stdio.h>
void main()
{
    int x,y,z,lcm;
    printf("Enter any two number: ");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>y)
        z=x;
    else
        z=y;
    while (1)
    {
        if (z%x == 0 && z%y==0)
        {
            lcm = z;
            break;
        }
        z++;
    }
    printf("LCM of %d and %d is %d",x,y,lcm);
}