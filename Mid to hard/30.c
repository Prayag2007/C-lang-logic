#include <stdio.h>
int n;
int isInArray(int a[], int m) {
    if (a[0] == 0)
        return 0;
    if (a[a[0]]== m)
        return 1;
    a[0]--;
    return isInArray(a, m);
}
void main() {
    int a[100], m;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    a[0]=n;
    for (int i = 1; i <= n; i++) 
        scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &m);
    if (isInArray(a, m))
        printf("Element %d is present in array.\n", m);
    else
        printf("Element %d is not present in array.\n", m);
}