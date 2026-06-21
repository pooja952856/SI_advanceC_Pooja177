//check whether a number is strong number or not.
#include<stdio.h>
int main(){
   int n,temp,rem,sum=0,i,fact;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++)
            fact*=fact;
            n/=10;
    }
        if(temp==sum)
        printf("strong number");
    else
    printf("not strong number");
     return 0;   
}