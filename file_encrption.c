// file encryption.
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch + 1, fp2);   // Encrypt by adding 1
    }

    fclose(fp1);
    fclose(fp2);

    printf("File Encrypted Successfully.");

    return 0;
}