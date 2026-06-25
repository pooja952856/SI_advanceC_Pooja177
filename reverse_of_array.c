// print reverse of a array.
#include <stdio.h>

int main() {
    int n,i,temp;
    printf("enter size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--) {
       
        printf("%d ",arr[i]);
    }
    return 0;
}