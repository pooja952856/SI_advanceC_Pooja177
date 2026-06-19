// write a program to swap two variables using temporary variable.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter two numbers to swap:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("numbers after swapping:%d %d",a,b);
    return 0;
}