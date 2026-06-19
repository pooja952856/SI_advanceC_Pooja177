// write a program to convert temperature from fahrenheit to celcius.
# include<stdio.h>
int main(){
    float c,f;
    printf("enter temperature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temperature in celcius: %f",c);
    return 0;

}