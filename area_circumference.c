//program to calculate area and circumference of circle.
#include<stdio.h>
int main(){
    float r,area,circumference;
    printf("enter the radius of circle :");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("area=%f\n",area);
    printf("circumference=%f\n",circumference);
    return 0;
}