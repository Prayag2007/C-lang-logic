#include <stdio.h>

int countWays(int n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

void main() {
    int n;
    printf("Enter number of steps: ");
    scanf("%d", &n);

    printf("Total ways = %d\n", countWays(n));
}
