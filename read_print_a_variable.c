// write an integer/float/char and print it.
#include <stdio.h>
int main(){
    int a;
     float b;
    char  c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf(" %c",&c);
    
    printf("integer=%d\n",a);
    printf("float=%f\n",b);
    printf("character=%c\n",c);

    return 0;
}