//find frequency of all character in a string.
#include<stdio.h>

int main()
{
    char str[10];
    int i,freq[256]={0};

    printf("Enter string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
        freq[str[i]]++;

    for(i=0;i<256;i++)
    {
        if(freq[i]!=0)
            printf("%c = %d\n",i,freq[i]);
    }

    return 0;
}