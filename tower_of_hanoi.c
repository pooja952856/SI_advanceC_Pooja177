//tower of hanoi.
#include<stdio.h>

void hanoi(int n,char s,char a,char d)
{
    if(n==1)
    {
        printf("Move %c to %c\n",s,d);
        return;
    }

    hanoi(n-1,s,d,a);
    printf("Move %c to %c\n",s,d);
    hanoi(n-1,a,s,d);
}

int main()
{
    int n;

    printf("Enter disks: ");
    scanf("%d",&n);

    hanoi(n,'A','B','C');

    return 0;
}