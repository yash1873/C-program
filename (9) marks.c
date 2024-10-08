#include<stdio.h>
int main()
{
    float a,b,c,d,e,agg,p1,sum,p2;
    printf("Enter the marks subjects=");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    agg=sum/5;
    p1=sum/500;
    p2=p1*100;
    printf("The aggregate is=%f",agg);
    printf("The percentage marks are=%f",p2);
    return 0;
}