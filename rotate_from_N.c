//rotate an array from n position.
#include <stdio.h>

int main()
{
    int arr[10], n, size, temp[10];

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &n);

    n = n % size;  // Handle rotations greater than array size

    for(int i = 0; i < size; i++)
    {
        temp[i] = arr[(i + n) % size];
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}