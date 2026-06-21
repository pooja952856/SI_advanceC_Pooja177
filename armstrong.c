// check whether anumber  is  armstrong or not.
#include<stdio.h>
int main(){
    int n,temp,rem,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(temp==sum)
    printf("armstrong number");
else
printf("not armstrong number");
return 0;

}