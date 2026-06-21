// check a number is prime or not.
#include<stdio.h>
int main(){
    int n,i,flag=1;
printf("enter a number:");
scanf("%d",&n);
if(n<=1){
    flag=0;
}
for(i=2;i<n;i++){
    if(n%i==0){
        flag=0;
        break;
    }
}
if(flag)
printf("prime");
else
printf("not prime");
return 0;
}