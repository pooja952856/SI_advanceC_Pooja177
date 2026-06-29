// call by value or call by reference.
#include<stdio.h>

void value(int a)
{
    a=100;
}

void reference(int *a)
{
    *a=100;
}

int main()
{
    int x=10;

    value(x);
    printf("After Call by Value = %d\n",x);

    reference(&x);
    printf("After Call by Reference = %d",x);

    return 0;
}