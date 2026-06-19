//swap two numbers without a temporary variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers to swap:");
    scanf("%d %d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("nunbers after swap: %d %d",a,b);
     return 0;
}