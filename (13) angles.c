#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,s,c,t,sc,cs,ct,pi;
    printf("Enter the value of angle");
    scanf("%f",&a);
    pi=3.14159;
    b=a*(pi/180);
    s=sin(b);
    c=cos(b);
    t=tan(b);
    cs=1/s;
    sc=1/c;
    ct=1/t;
    printf("The sin value is =%f\n",s);
    printf("The cos value is =%f\n",c);
    printf("The tan value is =%f\n",t);
    printf("The sec value is =%f\n",sc);
    printf("The cosec value is =%f\n",cs);
    printf("The cot value is =%f\n",ct);
    return 0;
}