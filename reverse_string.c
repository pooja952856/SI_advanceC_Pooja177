// print reverse of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;
    printf("enter a string:");
    gets(str);

    while(str[len] != '\0')
        len++;

    printf("Reverse String = ");

    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}