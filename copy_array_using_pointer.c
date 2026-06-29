// copy array using ponters.
#include<stdio.h>

int main()
{
    int a[5],b[5],*p,*q,i;

    p=a;
    q=b;
    printf("enter elements:");
    for(i=0;i<5;i++)
        scanf("%d",p+i);

    for(i=0;i<5;i++)
        *(q+i)=*(p+i);
    printf("copied array:");
    for(i=0;i<5;i++)
        printf("%d ",b[i]);

    return 0;
}