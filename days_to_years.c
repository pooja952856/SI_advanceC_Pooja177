// convert days into years,weeksamd days.
#include<stdio.h>
int main(){
    int days,years,weeks,rem;
    printf("enter days:");
    scanf("%d",&days);
    years=days/365;
    rem=days%365;
    weeks=rem/7;
    rem=rem%7;
    printf("years=%d\n",years);
    printf("weeks=%d\n",weeks);
    printf("days=%d",rem);
    return 0;
}
