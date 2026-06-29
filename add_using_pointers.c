// adding two numbers using pointers.
#include<stdio.h>

int main()
{
    int a,b,*p,*q;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);

    p=&a;
    q=&b;

    printf("Sum=%d",*p+*q);

    return 0;
}