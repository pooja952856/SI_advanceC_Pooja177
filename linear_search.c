// linear search.
#include <stdio.h>

int main() {
    int n,i,key;
    printf("enter size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the value you want to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++) {
        if(arr[i]==key) {
            printf("Found at index %d",i);
            return 0;
        }
    }

    printf("Not Found");

    return 0;
}