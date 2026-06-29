// find middle element.
#include <stdio.h>

int main()
{
    int a[10], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Middle Element = %d", a[n/2]);

    return 0;
}