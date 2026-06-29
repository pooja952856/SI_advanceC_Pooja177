// count vowels,consonents,digits and spaces in a string.
#include <stdio.h>

int main() {
    char str[10];
    int i=0, vowels=0, consonants=0, digits=0, spaces=0;
    printf("enter a string:");
    gets(str);

    while(str[i]!='\0') {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;

        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            consonants++;

        else if(str[i]>='0'&&str[i]<='9')
            digits++;

        else if(str[i]==' ')
            spaces++;

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);

    return 0;
}