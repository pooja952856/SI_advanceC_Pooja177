//reverse of an array using pointer.
#include<stdio.h>

int main()
{
    int a[5],*p,i;

    p=a;
    printf("enter array:");
    for(i=0;i<5;i++)
        scanf("%d",p+i);
    printf("reversed array:");
    for(i=4;i>=0;i--)
        printf("%d ",*(p+i));

    return 0;
}