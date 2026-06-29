// sort a string alphabetically.
#include <stdio.h>
#include <string.h>

int main() {
    char str[5][5], temp[5];
    int i, j;
    printf("enter a string:");
    for(i=0; i<5; i++)
        gets(str[i]);

    for(i=0; i<5; i++) {
        for(j=i+1; j<5; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted Strings:\n");

    for(i=0; i<5; i++)
        puts(str[i]);

    return 0;
}