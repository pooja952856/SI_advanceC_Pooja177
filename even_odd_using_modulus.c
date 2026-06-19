//check if a number is even or odd using modulus operator.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number to check:");
    scanf("%d",&n);
    if(n%2==0){
        printf("number is even");
    }
    else
    printf("number is odd");
return 0;


}