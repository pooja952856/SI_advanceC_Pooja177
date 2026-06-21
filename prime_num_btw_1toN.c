// print prime number between 1 to N.
#include<stdio.h>
int main(){
    int n,i,j,flag;
    printf("enter N:");

    scanf("%d",&n);
    for(i=2;i<=n;i++){
        flag=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag)
        printf(" %d",i);
    }
    return 0;
}
