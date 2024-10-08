#include<stdio.h>
int main ()
{
    float a,b,c,d;
    printf("enter the base salary");
    scanf("%f",&a);
    b=0.4*a;
    c=0.2*a;
    d=a+b+c;
    printf("\nThe dearness allowance is=%f",b);
    printf("\nThe housing allowance is =%f",c);
    printf("\nThe gross salary is =%f",d);
    return 0;
}