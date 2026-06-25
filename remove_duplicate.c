// remove duplicate element from an array.
#include <stdio.h>

int main()
{
    int arr[10], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--; // Check the new element at position j
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}