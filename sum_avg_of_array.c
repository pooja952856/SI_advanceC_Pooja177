// find sum and average of a array.
#include <stdio.h>

int main() {
    int n,i,sum=0;
    float avg;

    printf("Size: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter element of array:");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        sum += arr[i];

    avg = (float)sum/n;

    printf("Sum = %d\n",sum);
    printf("Average = %.f",avg);

    return 0;
}