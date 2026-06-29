// swap two numbers using pointers.
#include<stdio.h>

int main()
{
    int a,b,*p,*q,temp;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);

    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;
    printf("numbers after swap:");
    printf("%d %d",a,b);

    return 0;
}