// check whether a given year is leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);

    if(year%400==0){
        printf("leap years");}
        else
        printf("not leap year");
    return 0;
    
}