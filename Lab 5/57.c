#include <stdio.h>

void main() 
{
    int n, count, visited[100] = {0};
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element%d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Frequency of each element:\n");
    for(int i = 0; i < n; i++) 
    {
        if(visited[i] == 1)
        {
            continue;
        }
        count = 1;
        for(int j = i + 1; j < n; j++) 
        {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", a[i], count);
    }
}