// find first and last element of an array.
#include <stdio.h>

int main()
{
    int a[10], n, i, key;
    int first = -1, last = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    if(first == -1){
        printf("Element not found");}
    else
    {
        printf("First Position = %d\n", first);
        printf("Last Position = %d", last);
    }

    return 0;
}