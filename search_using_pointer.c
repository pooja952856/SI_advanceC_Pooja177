// search an element using pointers.
#include<stdio.h>

int main()
{
    int a[5],*p,i,key;

    p=a;
    printf("enter elements:");
    for(i=0;i<5;i++){
        scanf("%d",p+i);}
    printf("enter the value you want to search:");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        if(*(p+i)==key)
        {
            printf("Found");
            return 0;
        }
    }

    printf("Not Found");

    return 0;
}