// string compression(another version).
#include<stdio.h>

int main()
{
    char str[10];
    int i,j,count;
    printf("enter string:");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i=j)
    {
        count=0;

        for(j=i;str[j]==str[i];j++)
            count++;

        printf("%c%d",str[i],count);
    }

    return 0;
}