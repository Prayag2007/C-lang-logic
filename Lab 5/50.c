#include <stdio.h>
void main()
{
    int n,y=0;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int p;
    printf("Enter element you want to find: ");
    scanf("%d",&p);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == p)
        {
            printf("%d is on %d index",p,i);
            y++;
            break;
        }
    }
    if (y==0)
    {
        printf("%d is not in array",p);
    }
}