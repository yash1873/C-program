#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    p=1000;
    n=3;
    r=8.5;
    /*formula for simple interest*/
    si=p*n*r/100;
    printf("%f\n",si);
    return 0;
}