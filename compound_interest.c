// program to calculate compound interest.
#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    float ci,amount;
    printf("enter principle amount");
    scanf("%f",&p);
    printf("enter rate");
    scanf("%f",&r);
    printf("enter time");
    scanf("%f",&t);
    amount=p*pow((1+r/100),t);
    ci=amount-p;
    printf("compound interest=%f",ci);
    return 0;
}