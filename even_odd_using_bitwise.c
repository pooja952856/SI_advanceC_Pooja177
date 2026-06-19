// check if a number if a number is evev or odd usinng bitwise operator.
#include<stdio.h.>
int main(){
    int n;
    printf("enter a number to check:");
    scanf("%d",&n);
    if(n&1){
        printf("number is odd");
    }
    else
    printf("number is even");
return 0;
}