// remove all character except alphabet.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[10];
    int i;

    printf("Enter string: ");
    gets(str);

    printf("Only Alphabets: ");

    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
            printf("%c",str[i]);
    }

    return 0;
}