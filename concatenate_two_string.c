// concatenate two string.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("enter string 1:");
    gets(str1);
    printf("enter string 2:");
    gets(str2);

    while(str1[i] != '\0')
        i++;

    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf(" concatenate string=%s", str1);

    return 0;
}