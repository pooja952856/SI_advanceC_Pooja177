// simple calculator using switch case.
#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("enter expression:");
    scanf("%d %c %d",&a,&op,&b);

    switch(op){
        case'+':printf("Result=%d",a+b);
        break;
        case'-':printf("Result=%d",a-b);
        break;
        case'*':printf("Result=%d",a*b);
        break;
        case'/':printf("Result=%d",a/b);
        break;
        case'%':printf("Result=%d",a%b);
        break;
        default:printf("Invalid expression");
    }
    return 0;
}