//check whether a character is alphabet,digit or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch=='A'&&ch=='Z')||(ch=='a'&&ch=='z'))
    {
        printf("Alphabet");
    }
    else if(ch>='0'&&ch<='9'){
        printf("digit");
    }
    else
    printf("special character");
return 0;
} 