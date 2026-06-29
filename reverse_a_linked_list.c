// reverse a linked list.
#include <stdio.h>

int main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");

    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    printf("Reversed List:\n");

    for(i=4; i>=0; i--)
        printf("%d ", a[i]);

    return 0;
}