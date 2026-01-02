#include <stdio.h>

int main()
{
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    int count = 0, num = 1;
    while (1)
    {
        int temp = num;
        int digits = 0;
        while (temp > 0)
        {
            temp /= 10;
            digits++;
        }
        if (count + digits >= n)
        {
            int pos = digits - (n - count) + 1;
            temp = num;
            for (int i = 1; i < pos; i++)
                temp /= 10;
            int ans = temp % 10;
            printf("The digit at position %d is: %d\n", n, ans);
            break;
        }
        count += digits;
        num++;
    }
    return 0;
}