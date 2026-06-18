// write a program to find duplicate element in an array
#include<stdio.h>
int main(){
    int n,i,arr[10],j;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the duplicate elements are:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;

            }     }
    }
    return 0;
}