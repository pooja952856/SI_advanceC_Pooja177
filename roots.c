// find the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,r1,r2;
    printf("enter coefficients of quadratic equation:");
    scanf("%f %f %f",&a,&c,&c);
    d=b*b-4*a*c;
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots=%f and %f",r1,r2);

    }
    else if(d==0){
        r1=-b/(2*a);
        printf("Equal roots=%f",r1);
    }
    else{
        printf("Imaginary roots");
    }
    return 0;

}