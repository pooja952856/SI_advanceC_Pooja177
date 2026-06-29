// convert a string to uppercase.
#include <stdio.h>

int main() {
    char str[10];
    int i;
    printf("enter a string:");
    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32;
    }

    printf(" string in upper case =%s", str);

    return 0;
}