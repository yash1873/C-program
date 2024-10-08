#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the distance between the two cities in kilometre");
    scanf("%f",&a);
    b=a*1000;    //km to meter
    c=a*3280.84; //km to feet 
    d=a*39370; //km to inches
    e=a*100000;  //km to cm 
    printf("The value in Kilometer=%f",a);
    printf("\nThe value in Meter=%f",b);
    printf("\nThe value in Feet=%f",c);
    printf("\nThe value in Inches is=%f",d);
    printf("\nThe value in Centimeter is=%f",e);
    return 0;
}