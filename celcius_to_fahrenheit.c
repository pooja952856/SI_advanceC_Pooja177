// wwrite a program to convert temperature from celcius to fahrenheit.
# include <stdio.h>
int main(){
    float c,f;
    printf("enter temperature in celcius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("temperature in fahrenheit:%f",f);
    return 0;
}