// binary search.
#include <stdio.h>

int main() {
    int n,i,key;
    printf("enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the value you want to search:");
    scanf("%d",&key);

    int low=0, high=n-1;

    while(low<=high) {
        int mid=(low+high)/2;

        if(arr[mid]==key) {
            printf("Found at index %d",mid);
            return 0;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Not Found");

    return 0;
}