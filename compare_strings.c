// compare two strings.
#include <stdio.h>

int main() {
    char s1[10], s2[10];
    int i = 0, flag = 1;
    printf("enter string 1:");
    gets(s1);
    printf("string 2:");
    gets(s2);

    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}