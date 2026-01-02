#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter size of array1: ");
    scanf("%d", &x);
    int a[x];

    printf("Enter size of array2: ");
    scanf("%d", &y);
    int b[y];

    printf("Enter elements of array1:\n");
    for (int i = 0; i < x; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);    
    }

    printf("Enter elements of array2:\n");
    for (int i = 0; i < y; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &b[i]);
    }
    

    printf("Union of arrays:\n");
    for (int i = 0; i < x; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(int i = 0; i < y; i++) 
    {
        int found = 0;
        for(int j = 0; j < x; j++) 
        {
            if(b[i] == a[j]) 
            {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            printf("%d ", b[i]);
        }
    }
    
}
