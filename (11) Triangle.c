#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sum,sp,ar1,ar2,x,y,z;
    printf("Enter the 3 sides of a triangle");
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    sp=sum/2;
    x=sp-a;
    y=sp-b;
    z=sp-c;
    ar1=sp*x*y*z;
    ar2=sqrt(ar1);
    printf("\nThe area of triangle is=%f",ar2);
    return 0;
}