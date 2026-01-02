#include <stdio.h>
#include <math.h>

void main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    int x = pow(2, n) - 1;

    printf("Total moves: %d", x);

}
