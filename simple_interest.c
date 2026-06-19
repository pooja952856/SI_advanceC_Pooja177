// program to calculate simple interest.
# include<stdio.h>
int main(){
    int  p,r,t,si;
  printf("enter rate:");
  scanf("%d",&r);
  printf("enter time");
  scanf("%d",&t);
  printf("enter principle  amount");
  scanf("%d",&p);
  si=(p*r*t)/100;
  printf("simple interest=%d",si);
  return 0;  
}