#include <stdio.h>
void sortDescending(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void removeDigit(int arr[], int *n, int digitToRemove)
{
    int i, j;
    for (i = 0; i < *n; i++)
    {
        if (arr[i] == digitToRemove)
        {
            for (j = i; j < *n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            return;
        }
    }
}
void main()
{
    int digits[100];
    int n, i, sum = 0, rem;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter the digits one by one: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &digits[i]);
        sum += digits[i];
    }
    sortDescending(digits, n);
    rem = sum % 3;
    if (rem == 0)
    {
        printf("Largest number divisible by 3: ");
        for (i = 0; i < n; i++)
        {
            printf("%d", digits[i]);
        }
        printf("\n");
    }
    else
    {
        int found = 0;
        for (i = n - 1; i >= 0; i--)
        {
            if (digits[i] % 3 == rem)
            {
                removeDigit(digits, &n, digits[i]);
                found = 1;
                break;
            }
        }
        if (found)
        {
            printf("Largest number divisible by 3: ");
            for (i = 0; i < n; i++)
            {
                printf("%d", digits[i]);
            }
            printf("\n");
        }
        else
        {
            int targetRem = (rem == 1) ? 2 : 1;
            int countRemoved = 0;
            for (i = n - 1; i >= 0 && countRemoved < 2; i--)
            {
                if (digits[i] % 3 == targetRem)
                {
                    removeDigit(digits, &n, digits[i]);
                    countRemoved++;
                }
            }
            if (countRemoved == 2)
            {
                printf("Largest number divisible by 3: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d", digits[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Cannot form a number divisible by 3.\n");
            }
        }
    }
}