// word frequency counter.
#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a sentence:\n");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
            count++;
    }

    printf("Number of Words = %d", count + 1);

    return 0;
}