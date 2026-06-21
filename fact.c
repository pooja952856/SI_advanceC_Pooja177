// find factorial of a number.
#include<stdio.h>
int main(){
    int n,i;
    int fact=1;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("Factorial=%d",fact);
    return 0;
}
