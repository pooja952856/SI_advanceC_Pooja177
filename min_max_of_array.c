// find minimum and maximum value of array.
#include <stdio.h>

int main() {
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
printf("enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max=arr[0], min=arr[0];

    for(i=1;i<n;i++) {
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }

    printf("Largest = %d\n",max);
    printf("Smallest = %d",min);

    return 0;
}